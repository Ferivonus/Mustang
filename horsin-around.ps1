# 1. Değişkenleri tanımla
$url = "https://github.com/Ferivonus/Mustang/archive/refs/heads/master.zip"
$projectDir = "C:\Temporary-Project"
$zipPath = Join-Path -Path $projectDir -ChildPath "Mustang.zip"
$extractPath = Join-Path -Path $projectDir -ChildPath "Mustang-master"

# EXE dosyasının yeni yolu
$exePath = Join-Path -Path $extractPath -ChildPath "Mustang-horse\x64\Release\Mustang-horse.exe"

# 2. İşlemler için klasör oluştur
Write-Host "Geçici klasör oluşturuluyor: $projectDir" -ForegroundColor Cyan
New-Item -ItemType Directory -Path $projectDir -Force

# 3. Klasörün içine geç
cd $projectDir

# 4. ZIP dosyasını indir
Write-Host "Proje indiriliyor..." -ForegroundColor Yellow
Invoke-WebRequest -Uri $url -OutFile $zipPath

# 5. Dosyayı çıkar (unzip)
Write-Host "Dosyalar çıkarılıyor..." -ForegroundColor Green
Expand-Archive -Path $zipPath -DestinationPath $projectDir -Force

# 6. .exe dosyasını çalıştır
Write-Host "Uygulama başlatılıyor..." -ForegroundColor Magenta
Start-Process -FilePath $exePath