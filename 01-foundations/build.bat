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
REM Compile learning files
echo Compiling learning files...
echo ------------------------
gcc -Wall -Wextra -std=c99 -g 01-hello-world.c -o 01-hello-world.exe
if %errorlevel% equ 0 (echo [✓] 01-hello-world.c) else (echo [✗] 01-hello-world.c)

gcc -Wall -Wextra -std=c99 -g 02-variables.c -o 02-variables.exe
if %errorlevel% equ 0 (echo [✓] 02-variables.c) else (echo [✗] 02-variables.c)

gcc -Wall -Wextra -std=c99 -g 03-input-output.c -o 03-input-output.exe
if %errorlevel% equ 0 (echo [✓] 03-input-output.c) else (echo [✗] 03-input-output.c)

gcc -Wall -Wextra -std=c99 -g 04-operators.c -o 04-operators.exe
if %errorlevel% equ 0 (echo [✓] 04-operators.c) else (echo [✗] 04-operators.c)

gcc -Wall -Wextra -std=c99 -g 05-conditionals.c -o 05-conditionals.exe
if %errorlevel% equ 0 (echo [✓] 05-conditionals.c) else (echo [✗] 05-conditionals.c)

gcc -Wall -Wextra -std=c99 -g 06-loops.c -o 06-loops.exe
if %errorlevel% equ 0 (echo [✓] 06-loops.c) else (echo [✗] 06-loops.c)

gcc -Wall -Wextra -std=c99 -g 07-practice.c -o 07-practice.exe
if %errorlevel% equ 0 (echo [✓] 07-practice.c) else (echo [✗] 07-practice.c)

echo.
echo Compiling exercise files...
echo ---------------------------
gcc -Wall -Wextra -std=c99 -g 01-exercise.c -o 01-exercise.exe
if %errorlevel% equ 0 (echo [✓] 01-exercise.c) else (echo [✗] 01-exercise.c)

gcc -Wall -Wextra -std=c99 -g 02-exercise.c -o 02-exercise.exe
if %errorlevel% equ 0 (echo [✓] 02-exercise.c) else (echo [✗] 02-exercise.c)

gcc -Wall -Wextra -std=c99 -g 03-exercise.c -o 03-exercise.exe
if %errorlevel% equ 0 (echo [✓] 03-exercise.c) else (echo [✗] 03-exercise.c)

gcc -Wall -Wextra -std=c99 -g 04-exercise.c -o 04-exercise.exe
if %errorlevel% equ 0 (echo [✓] 04-exercise.c) else (echo [✗] 04-exercise.c)

gcc -Wall -Wextra -std=c99 -g 05-exercise.c -o 05-exercise.exe
if %errorlevel% equ 0 (echo [✓] 05-exercise.c) else (echo [✗] 05-exercise.c)

gcc -Wall -Wextra -std=c99 -g 06-exercise.c -o 06-exercise.exe
if %errorlevel% equ 0 (echo [✓] 06-exercise.c) else (echo [✗] 06-exercise.c)

echo.
echo ======================================
echo   Compilation completed!
echo ======================================
echo.
echo LEARNING FILES:
echo   01-hello-world.exe      (Basic output)
echo   02-variables.exe        (Data types)
echo   03-input-output.exe     (User input)
echo   04-operators.exe        (All operators)
echo   05-conditionals.exe     (Decision making)
echo   06-loops.exe            (Iteration)
echo   07-practice.exe         (Combined practice)
echo.
echo EXERCISE FILES (for hands-on practice):
echo   01-exercise.exe         (Hello World practice)
echo   02-exercise.exe         (Variables practice)
echo   03-exercise.exe         (Input/Output practice)
echo   04-exercise.exe         (Operators practice)
echo   05-exercise.exe         (Conditionals practice)
echo   06-exercise.exe         (Loops practice)
echo.
echo RECOMMENDED LEARNING PATH:
echo   1. Run a learning file (e.g., 01-hello-world.exe)
echo   2. Study the source code
echo   3. Complete the corresponding exercise file
echo   4. Move to the next topic
echo   04-operators.exe
echo   05-conditionals.exe
echo   06-loops.exe
echo   07-practice.exe
echo.
pause
