[CmdletBinding()]
param(
    [switch]$Clean,
    [int]$Parallel = [Math]::Max(2, [Environment]::ProcessorCount - 1)
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$buildDir = Join-Path $repoRoot 'out/build/win-amd64-release'

Write-Host "==========================================================" -ForegroundColor Cyan
Write-Host "          FORZA HORIZON 2 - AUTOMATED BUILD PIPELINE       " -ForegroundColor Yellow
Write-Host "==========================================================" -ForegroundColor Cyan

if ($Clean) {
    Write-Host "[1/2] Cleaning build cache..." -ForegroundColor Yellow
    & ninja -C "$buildDir" -t clean
}

Write-Host "[2/2] Compiling and Linking forzahorizon2.exe (Parallel: $Parallel)..." -ForegroundColor Cyan
& cmake --build "$buildDir" --parallel $Parallel

if ($LASTEXITCODE -eq 0) {
    Write-Host "Build Successful! Output ready at: $buildDir\forzahorizon2.exe" -ForegroundColor Green
} else {
    Write-Host "Build Failed with Exit Code $LASTEXITCODE" -ForegroundColor Red
    exit 1
}
