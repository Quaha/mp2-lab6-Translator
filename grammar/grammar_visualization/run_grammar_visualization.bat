@echo off

set GRAMMAR_DIR=..\grammar_source
set INPUT_FILE=..\grammar_visualization\input.txt
set GRAMMAR_NAME=MyGrammar

if not exist "%GRAMMAR_DIR%\%GRAMMAR_NAME%.g4" (
    echo Grammar file not found: %GRAMMAR_DIR%\%GRAMMAR_NAME%.g4
    pause
    exit /b
)

if not exist "%INPUT_FILE%" (
    echo Input file not found: %INPUT_FILE%
    pause
    exit /b
)

call conda activate base
cd /d %GRAMMAR_DIR%

echo Launching the visualization of the ANTLR parse tree...
antlr4-parse %GRAMMAR_NAME%.g4 program -tree %INPUT_FILE% -gui

pause
