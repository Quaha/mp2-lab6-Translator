@echo off
setlocal

:: === Building dll ===
set BUILD_DIR=external\antlr4-runtime-cpp\build

set INSTALL_DIR=%CD%\core\antlr

if not exist "%BUILD_DIR%" (
    mkdir "%BUILD_DIR%"
)

echo Cleaning %BUILD_DIR% ...
for /D %%d in ("%BUILD_DIR%\*") do rd /s /q "%%d"
del /q "%BUILD_DIR%\*"

if exist "%INSTALL_DIR%" (
    echo Cleaning %INSTALL_DIR% ...
    for /D %%d in ("%INSTALL_DIR%\*") do rd /s /q "%%d"
    del /q "%INSTALL_DIR%\*"
) else (
    echo Creating install directory %INSTALL_DIR%
    mkdir "%INSTALL_DIR%"
)

pushd "%BUILD_DIR%" || (
    echo Error: Couldn't navigate to folder %BUILD_DIR%
    exit /b 1
)

cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=17 -DANTLR_BUILD_SHARED=ON -DCMAKE_INSTALL_PREFIX="%INSTALL_DIR%"

cmake --build . --config Release --target install

popd
:: === End of Building dll ===

:: === Building sln ===

set BUILD_DIR=build

set DLL_SRC=core\antlr\bin\antlr4-runtime.dll

set RELEASE_DIR=Release

if exist %BUILD_DIR% (
    rmdir /s /q %BUILD_DIR%
)
mkdir %BUILD_DIR%
cd %BUILD_DIR%

cmake ..
if not exist %RELEASE_DIR% mkdir %RELEASE_DIR%

copy ..\%DLL_SRC% %RELEASE_DIR%

::: === End of Building sln ===

echo Done!
pause
