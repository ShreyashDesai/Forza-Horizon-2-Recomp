[CmdletBinding()]
param(
    [ValidateSet('Get', 'Apply', 'Reset')]
    [string]$Action = 'Get',
    [ValidateSet(4, 8, 16)]
    [int]$Anisotropy = 16,
    [ValidateSet('none', 'fxaa', 'fxaa_extreme')]
    [string]$PostEffect = 'fxaa',
    [ValidateSet(1, 2)]
    [int]$ResolutionScale = 1,
    [string]$ConfigPath
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$resolvedConfig = if ($ConfigPath) {
    (Resolve-Path $ConfigPath).Path
} else {
    $candidate1 = Join-Path $repoRoot 'out/build/win-amd64-release/forzahorizon2.toml'
    $candidate2 = 'D:\GAME RECOMP\forzahorizon2.toml'
    if (Test-Path -LiteralPath $candidate1) {
        $candidate1
    } elseif (Test-Path -LiteralPath $candidate2) {
        $candidate2
    } else {
        $candidate1
    }
}

if (-not (Test-Path -LiteralPath $resolvedConfig)) {
    throw "Configuration file not found at: $resolvedConfig"
}

$text = Get-Content -LiteralPath $resolvedConfig -Raw

function Set-TomlKey([string]$content, [string]$key, [string]$val) {
    $pattern = "(?m)^\s*" + [regex]::Escape($key) + "\s*=.*$"
    $replacement = "$key = $val"
    if ([regex]::IsMatch($content, $pattern)) {
        return [regex]::Replace($content, $pattern, $replacement, 1)
    }
    return "$content`r`n$replacement"
}

switch ($Action) {
    'Get' {
        Write-Host "Current Forza Horizon 2 Graphics Settings ($resolvedConfig):" -ForegroundColor Cyan
        Get-Content -LiteralPath $resolvedConfig | Select-String "anisotropic|resolution|post_effect|vsync"
    }
    'Apply' {
        $override = switch ($Anisotropy) { 4 { 3 } 8 { 4 } 16 { 5 } }
        $text = Set-TomlKey $text 'anisotropic_override' ([string]$override)
        $text = Set-TomlKey $text 'swap_post_effect' ('"' + $PostEffect + '"')
        $text = Set-TomlKey $text 'draw_resolution_scale_x' ([string]$ResolutionScale)
        $text = Set-TomlKey $text 'draw_resolution_scale_y' ([string]$ResolutionScale)
        [IO.File]::WriteAllText($resolvedConfig, $text.TrimEnd("`r", "`n") + [Environment]::NewLine, [Text.UTF8Encoding]::new($false))
        Write-Host "Applied Graphics Settings: Anisotropy=${Anisotropy}x, PostEffect=${PostEffect}, Scale=${ResolutionScale}x" -ForegroundColor Green
    }
    'Reset' {
        $text = Set-TomlKey $text 'anisotropic_override' '3'
        $text = Set-TomlKey $text 'swap_post_effect' '"none"'
        $text = Set-TomlKey $text 'draw_resolution_scale_x' '1'
        $text = Set-TomlKey $text 'draw_resolution_scale_y' '1'
        [IO.File]::WriteAllText($resolvedConfig, $text.TrimEnd("`r", "`n") + [Environment]::NewLine, [Text.UTF8Encoding]::new($false))
        Write-Host "Reset Graphics Settings to Default!" -ForegroundColor Yellow
    }
}
