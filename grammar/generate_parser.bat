@echo off

set JAR=grammar_source\antlr4-4.13.1-complete.jar
set INPUT_DIR=grammar_source
set OUTPUT_DIR=grammar_build

if not exist %JAR% (
    echo Error: JAR file not found: %JAR%
    exit /b
)

if exist %OUTPUT_DIR% (
    echo Clearing build folder "%OUTPUT_DIR%" ...
    rd /s /q %OUTPUT_DIR%
)

mkdir %OUTPUT_DIR%

pushd %INPUT_DIR%

for %%f in (*.g4) do (
    echo Generation for "%%f" ...
    java -jar ..\%JAR% -Dlanguage=Cpp -listener -visitor -o ..\%OUTPUT_DIR% %%f
)

popd

echo Done. Sources in the folder "%OUTPUT_DIR%".

pause
