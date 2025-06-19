@echo off
REM Build script for Phase 1 - Foundations (Windows)
REM This script compiles all C programs in the foundations phase

echo ======================================
echo   C Learning - Phase 1 Build Script
echo ======================================

REM Check if GCC is available
gcc --version >nul 2>&1
if %errorlevel% neq 0 (
    echo ERROR: GCC compiler not found!
    echo Please install GCC or MinGW to compile C programs.
    echo You can download MinGW from: https://mingw-w64.org/
    pause
    exit /b 1
)

echo GCC compiler found. Compiling programs...
echo.

REM Compile each program
echo Compiling 01-hello-world.c...
gcc -Wall -Wextra -std=c99 -g 01-hello-world.c -o 01-hello-world.exe
if %errorlevel% neq 0 echo ERROR compiling 01-hello-world.c

echo Compiling 02-variables.c...
gcc -Wall -Wextra -std=c99 -g 02-variables.c -o 02-variables.exe
if %errorlevel% neq 0 echo ERROR compiling 02-variables.c

echo Compiling 03-input-output.c...
gcc -Wall -Wextra -std=c99 -g 03-input-output.c -o 03-input-output.exe
if %errorlevel% neq 0 echo ERROR compiling 03-input-output.c

echo Compiling 04-operators.c...
gcc -Wall -Wextra -std=c99 -g 04-operators.c -o 04-operators.exe
if %errorlevel% neq 0 echo ERROR compiling 04-operators.c

echo Compiling 05-conditionals.c...
gcc -Wall -Wextra -std=c99 -g 05-conditionals.c -o 05-conditionals.exe
if %errorlevel% neq 0 echo ERROR compiling 05-conditionals.c

echo Compiling 06-loops.c...
gcc -Wall -Wextra -std=c99 -g 06-loops.c -o 06-loops.exe
if %errorlevel% neq 0 echo ERROR compiling 06-loops.c

echo Compiling 07-practice.c...
gcc -Wall -Wextra -std=c99 -g 07-practice.c -o 07-practice.exe
if %errorlevel% neq 0 echo ERROR compiling 07-practice.c

echo.
echo ======================================
echo   Compilation completed!
echo ======================================
echo.
echo You can now run the programs:
echo   01-hello-world.exe
echo   02-variables.exe
echo   03-input-output.exe
echo   04-operators.exe
echo   05-conditionals.exe
echo   06-loops.exe
echo   07-practice.exe
echo.
pause
