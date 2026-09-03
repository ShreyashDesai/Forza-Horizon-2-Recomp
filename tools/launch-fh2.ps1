[CmdletBinding()]
param(
    [string]$Configuration = 'Release',
    [string]$GameRoot,
    [string]$StateRoot
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$executable = Join-Path $repoRoot 'out/build/win-amd64-release/forzahorizon2.exe'
if (-not (Test-Path -LiteralPath $executable)) {
    $executable = 'D:\GAME RECOMP\forzahorizon2.exe'
}

$resolvedGameRoot = if ($GameRoot) {
    (Resolve-Path -LiteralPath $GameRoot).Path
} else {
    'D:\GAME RECOMP\Forza Horizon 2 (Europe) (En,Ja,Fr,De,Es,It,Pt,Zh,Pl,Ru)'
}

$resolvedStateRoot = if ($StateRoot) {
    [IO.Path]::GetFullPath($StateRoot)
} else {
    Join-Path $repoRoot 'out/build/win-amd64-release'
}

if (-not (Test-Path -LiteralPath $executable -PathType Leaf)) {
    throw "Forza Horizon 2 executable not found at: $executable"
}
if (-not (Test-Path -LiteralPath (Join-Path $resolvedGameRoot 'default.xex') -PathType Leaf)) {
    throw "Verified game files missing default.xex in: $resolvedGameRoot"
}

# Create required isolated directories
foreach ($dir in @('', 'cache', 'config', 'crashes', 'logs', 'reports', 'update', 'user')) {
    $targetPath = if ($dir) { Join-Path $resolvedStateRoot $dir } else { $resolvedStateRoot }
    [void](New-Item -ItemType Directory -Force -Path $targetPath)
}

$startedUtc = [DateTime]::UtcNow
$env:REX_D3D12_ALLOW_VARIABLE_REFRESH_RATE_AND_TEARING = 'false'

Write-Host "==========================================================" -ForegroundColor Cyan
Write-Host "           FORZA HORIZON 2 - DIRECTX 12 LAUNCHER          " -ForegroundColor Yellow
Write-Host "==========================================================" -ForegroundColor Cyan
Write-Host " Executable: $executable" -ForegroundColor Gray
Write-Host " Game Root : $resolvedGameRoot" -ForegroundColor Gray
Write-Host " State Root: $resolvedStateRoot" -ForegroundColor Gray
Write-Host " Starting forzahorizon2.exe..." -ForegroundColor Green

$process = Start-Process -FilePath $executable `
    -WorkingDirectory (Split-Path $executable -Parent) -PassThru

$process.WaitForExit()
$exitCode = [int64]$process.ExitCode

if ($exitCode -ne 0) {
    Write-Host "Game exited with code: $exitCode (Crash/Error)" -ForegroundColor Red
    exit 1
} else {
    Write-Host "Game closed normally (Exit Code 0)." -ForegroundColor Green
}
