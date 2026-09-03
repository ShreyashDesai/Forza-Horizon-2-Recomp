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
Write-Host "       FORZA HORIZON 2 - COMPLETE ONE-CLICK SETUP         " -ForegroundColor Yellow
Write-Host "==========================================================" -ForegroundColor Cyan

# 1. Ensure output and state directories exist
foreach ($dir in @('user', 'cache', 'logs', 'crashes', 'config')) {
    $p = Join-Path $buildDir $dir
    [void](New-Item -ItemType Directory -Force -Path $p)
}

# 2. Build the recompiled project
Write-Host "[1/2] Building Forza Horizon 2 executable and DLLs..." -ForegroundColor Cyan
& (Join-Path $PSScriptRoot 'build-fh2.ps1') -Clean:$Clean -Parallel $Parallel

# 3. Verify executable output
$exe = Join-Path $buildDir 'forzahorizon2.exe'
if (Test-Path -Path $exe) {
    Write-Host "==========================================================" -ForegroundColor Cyan
    Write-Host " SETUP COMPLETE! Binary ready: $exe" -ForegroundColor Green
    Write-Host " To launch the game, run: .\tools\launch-fh2.ps1" -ForegroundColor Yellow
    Write-Host "==========================================================" -ForegroundColor Cyan
} else {
    Write-Host "Setup Failed: forzahorizon2.exe was not found." -ForegroundColor Red
    exit 1
}
