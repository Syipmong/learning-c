@echo off
REM Comprehensive build script for all C learning exercises
REM This script compiles all exercise files and creates executables

echo ============================================
echo    C Learning Exercises - Build Script
echo ============================================
echo.

REM Create bin directory if it doesn't exist
if not exist "bin" mkdir bin

echo Compiling Phase 1: Foundations
echo ==============================

REM Phase 1 Exercises
gcc exercise1-personal-info.c -o bin/exercise1-personal-info.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 1: Personal Info - Compiled successfully
) else (
    echo [✗] Exercise 1: Personal Info - Compilation failed
)

gcc exercise2-calculator.c -o bin/exercise2-calculator.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 2: Calculator - Compiled successfully
) else (
    echo [✗] Exercise 2: Calculator - Compilation failed
)

gcc exercise3-operators.c -o bin/exercise3-operators.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 3: Operators - Compiled successfully
) else (
    echo [✗] Exercise 3: Operators - Compilation failed
)

gcc exercise4-conditionals.c -o bin/exercise4-conditionals.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 4: Conditionals - Compiled successfully
) else (
    echo [✗] Exercise 4: Conditionals - Compilation failed
)

gcc exercise5-loops.c -o bin/exercise5-loops.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 5: Loops - Compiled successfully
) else (
    echo [✗] Exercise 5: Loops - Compilation failed
)

echo.
echo Compiling Phase 2: Core Concepts
echo =================================

REM Phase 2 Exercises
gcc exercise6-functions.c -o bin/exercise6-functions.exe -lm
if %errorlevel% equ 0 (
    echo [✓] Exercise 6: Functions - Compiled successfully
) else (
    echo [✗] Exercise 6: Functions - Compilation failed
)

gcc exercise7-arrays-strings.c -o bin/exercise7-arrays-strings.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 7: Arrays and Strings - Compiled successfully
) else (
    echo [✗] Exercise 7: Arrays and Strings - Compilation failed
)

gcc exercise8-pointers.c -o bin/exercise8-pointers.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 8: Pointers - Compiled successfully
) else (
    echo [✗] Exercise 8: Pointers - Compilation failed
)

echo.
echo Compiling Phase 3: Intermediate
echo ===============================

REM Phase 3 Exercises
gcc exercise9-structures.c -o bin/exercise9-structures.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 9: Structures - Compiled successfully
) else (
    echo [✗] Exercise 9: Structures - Compilation failed
)

gcc exercise10-fileio.c -o bin/exercise10-fileio.exe
if %errorlevel% equ 0 (
    echo [✓] Exercise 10: File I/O - Compiled successfully
) else (
    echo [✗] Exercise 10: File I/O - Compilation failed
)

echo.
echo ============================================
echo Build complete! Executables are in bin/
echo.
echo To run an exercise:
echo   bin\exercise1-personal-info.exe
echo   bin\exercise2-calculator.exe
echo   etc.
echo.
echo Recommended learning order:
echo 1. Phase 1 (Exercises 1-5): Foundations
echo 2. Phase 2 (Exercises 6-8): Core Concepts  
echo 3. Phase 3 (Exercises 9-10): Intermediate
echo ============================================

pause
