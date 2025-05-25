@echo off
setlocal

echo Starting parser generation...
call grammar\generate_parser.bat
if errorlevel 1 (
    echo Error in generate_parser.bat
    pause
    exit /b 1
)

echo Starting the creation of the dll...
call create_release_antlr4-dll.bat
if errorlevel 1 (
    echo Error in create_release_antlr4-dll.bat
    pause
    exit /b 1
)

echo Launching the creation of a solution...
call create_sln_release.bat
if errorlevel 1 (
    echo Error in create_sln_release.bat
    pause
    exit /b 1
)

echo Done!
pause
