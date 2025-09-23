# This script downloads, extracts, and runs a GitHub project within the current directory.

# 1. Define variables
$url = "https://github.com/Ferivonus/Mustang/archive/refs/heads/master.zip"
$currentDir = Get-Location
$projectDir = Join-Path -Path $currentDir -ChildPath "Temporary-Project"
$zipPath = Join-Path -Path $projectDir -ChildPath "Mustang.zip"
$extractPath = Join-Path -Path $projectDir -ChildPath "Mustang-master"
$exePath = Join-Path -Path $extractPath -ChildPath "x64\Release\Mustang-horse.exe"

# 2. Create a folder for the operations
Write-Host "Creating temporary folder: $projectDir" -ForegroundColor Cyan
New-Item -ItemType Directory -Path $projectDir -Force

# 3. Change into the new folder
cd $projectDir

# 4. Download the ZIP file
Write-Host "Downloading the project..." -ForegroundColor Yellow
Invoke-WebRequest -Uri $url -OutFile $zipPath

# 5. Extract the files from the ZIP
Write-Host "Extracting files..." -ForegroundColor Green
Expand-Archive -Path $zipPath -DestinationPath $projectDir -Force

# 6. Run the executable file
Write-Host "Starting the application..." -ForegroundColor Magenta
Start-Process -FilePath $exePath