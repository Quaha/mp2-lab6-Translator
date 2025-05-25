@echo off
setlocal

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