[CmdletBinding()]
param(
    [string]$PatchDirectory,
    [string]$SdkDirectory = 'D:\GAME RECOMP\rexglue-sdk',
    [switch]$Revert,
    [switch]$CheckOnly
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

# NOTE: this script used to only hash the .patch files and print
# "All 37 ReXGlue compatibility patches verified and active!" without ever
# touching the SDK. Nothing was applied, and the project linked against the
# stock prebuilt runtime in rexglue-bin, so every one of these fixes was
# missing at runtime. It now actually applies them.

$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$resolvedPatchDir = if ($PatchDirectory) {
    (Resolve-Path $PatchDirectory).Path
} else {
    Join-Path $repoRoot 'patches/rexglue'
}

if (-not (Test-Path -LiteralPath $SdkDirectory)) {
    throw "ReXGlue SDK source tree not found: $SdkDirectory"
}
if (-not (Test-Path -LiteralPath (Join-Path $SdkDirectory '.git'))) {
    throw "Not a git checkout, cannot apply or revert patches: $SdkDirectory"
}

$patches = @(Get-ChildItem -Path $resolvedPatchDir -Filter '*.patch' | Sort-Object Name)

Write-Host "==========================================================" -ForegroundColor Cyan
Write-Host "       FORZA HORIZON 2 - REXGLUE COMPATIBILITY PATCHES    " -ForegroundColor Yellow
Write-Host "==========================================================" -ForegroundColor Cyan
Write-Host " Patch directory: $resolvedPatchDir" -ForegroundColor Gray
Write-Host " SDK source tree: $SdkDirectory" -ForegroundColor Gray
Write-Host " Patches found  : $($patches.Count)" -ForegroundColor Gray

Push-Location $SdkDirectory
try {
    if ($Revert) {
        # Reverse order: the series is sequential, later patches build on earlier ones.
        [array]::Reverse($patches)
        foreach ($p in $patches) {
            & git apply --reverse $p.FullName
            if ($LASTEXITCODE -ne 0) { throw "Failed to revert $($p.Name)" }
            Write-Host "  [REVERTED] $($p.Name)" -ForegroundColor Yellow
        }
        Write-Host " All patches reverted." -ForegroundColor Green
        return
    }

    $dirty = & git status --porcelain
    if ($dirty) {
        Write-Host " SDK tree already has local modifications:" -ForegroundColor Yellow
        Write-Host "   $(@($dirty).Count) file(s). Assuming the series is applied." -ForegroundColor Yellow
        Write-Host "   Use -Revert first to reapply from a clean tree." -ForegroundColor Yellow
        return
    }

    $mode = if ($CheckOnly) { '--check' } else { $null }
    $applied = 0
    foreach ($p in $patches) {
        # Applied in filename order; each patch expects the previous ones in place,
        # so a mid-series failure means the tree is not at the expected baseline.
        if ($mode) { & git apply $mode $p.FullName } else { & git apply $p.FullName }
        if ($LASTEXITCODE -ne 0) {
            throw "Failed at $($p.Name) after $applied patch(es). SDK left partially patched; run with -Revert or 'git checkout .' in $SdkDirectory."
        }
        $applied++
        $verb = if ($CheckOnly) { 'OK  ' } else { 'APPLIED' }
        Write-Host "  [$verb] $($p.Name)" -ForegroundColor Cyan
    }

    Write-Host "==========================================================" -ForegroundColor Cyan
    if ($CheckOnly) {
        Write-Host " $applied/$($patches.Count) patches apply cleanly (nothing written)." -ForegroundColor Green
    } else {
        Write-Host " $applied/$($patches.Count) patches applied to the SDK source." -ForegroundColor Green
        Write-Host " Now rebuild the SDK from source and point the project at it:" -ForegroundColor Yellow
        Write-Host "   cmake -DREXSDK_DIR=`"$SdkDirectory`" ..." -ForegroundColor Yellow
        Write-Host " Linking against rexglue-bin uses the UNPATCHED runtime." -ForegroundColor Yellow
    }
    Write-Host "==========================================================" -ForegroundColor Cyan
}
finally {
    Pop-Location
}
