[CmdletBinding()]
param(
    [string]$LogDir,
    [string]$OutputDir
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$resolvedLogDir = if ($LogDir) {
    (Resolve-Path $LogDir).Path
} else {
    Join-Path $repoRoot 'out/build/win-amd64-release/logs'
}

$resolvedOutputDir = if ($OutputDir) {
    (Resolve-Path $OutputDir).Path
} else {
    Join-Path $repoRoot 'out/build/win-amd64-release/crashes'
}

[void](New-Item -ItemType Directory -Force -Path $resolvedOutputDir)

if (-not (Test-Path -LiteralPath $resolvedLogDir)) {
    Write-Host "Log directory not found: $resolvedLogDir" -ForegroundColor Yellow
    exit 0
}

$latestLog = Get-ChildItem -Path $resolvedLogDir -Filter '*.log' | Sort-Object LastWriteTime -Descending | Select-Object -First 1

if ($null -eq $latestLog) {
    Write-Host "No log files found in $resolvedLogDir" -ForegroundColor Yellow
    exit 0
}

$stamp = [DateTime]::UtcNow.ToString('yyyyMMddTHHmmssZ')
$reportPath = Join-Path $resolvedOutputDir "crash-report-$stamp.txt"

Write-Host "Analyzing latest log: $($latestLog.FullName)" -ForegroundColor Cyan

$lines = Get-Content -LiteralPath $latestLog.FullName
$fatalMatches = $lines | Select-String "FATAL|critical|unresolved|exception|Access Violation"
$fatalText = ($fatalMatches | ForEach-Object { $_.Line }) -join "`r`n"
$lastLinesText = ($lines | Select-Object -Last 30) -join "`r`n"

$reportContent = "==========================================================`r`n" +
                 "             FORZA HORIZON 2 CRASH ANALYSIS               `r`n" +
                 "==========================================================`r`n" +
                 "Timestamp : " + (Get-Date -Format 'yyyy-MM-dd HH:mm:ss') + "`r`n" +
                 "Log File  : " + $latestLog.FullName + "`r`n`r`n" +
                 "--- CRITICAL ERRORS FOUND ---`r`n" +
                 $fatalText + "`r`n`r`n" +
                 "--- LAST 30 LOG LINES ---`r`n" +
                 $lastLinesText

[IO.File]::WriteAllText($reportPath, $reportContent, [Text.UTF8Encoding]::new($false))
Write-Host "Crash report generated at: $reportPath" -ForegroundColor Green
Write-Host $reportContent
