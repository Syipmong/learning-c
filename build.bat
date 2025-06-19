@echo off
REM Master build script for C Learning Project
REM Builds all phases of the learning curriculum

echo ================================================
echo     C Programming Learning Journey
echo     Master Build Script
echo ================================================
echo.

REM Check if GCC is available
gcc --version >nul 2>&1
if %errorlevel% neq 0 (
    echo ERROR: GCC compiler not found!
    echo.
    echo Please install GCC or MinGW to compile C programs.
    echo Download options:
    echo 1. MinGW-w64: https://mingw-w64.org/
    echo 2. TDM-GCC: https://jmeubank.github.io/tdm-gcc/
    echo 3. Code::Blocks with MinGW: http://www.codeblocks.org/
    echo.
    pause
    exit /b 1
)

echo GCC compiler found!
echo.

:menu
echo ================================================
echo              BUILD MENU
echo ================================================
echo 1. Build Phase 1 - Foundations
echo 2. Build Phase 2 - Core Concepts
echo 3. Build Phase 3 - Intermediate
echo 4. Build Phase 4 - Advanced
echo 5. Build Phase 5 - System Programming
echo 6. Build Phase 6 - Scalable Applications
echo 7. Build Phase 7 - C++ Transition
echo 8. Build All Phases
echo 9. Clean All
echo 0. Exit
echo.
set /p choice="Enter your choice (0-9): "

if "%choice%"=="1" goto phase1
if "%choice%"=="2" goto phase2
if "%choice%"=="3" goto phase3
if "%choice%"=="4" goto phase4
if "%choice%"=="5" goto phase5
if "%choice%"=="6" goto phase6
if "%choice%"=="7" goto phase7
if "%choice%"=="8" goto buildall
if "%choice%"=="9" goto clean
if "%choice%"=="0" goto exit
echo Invalid choice! Please try again.
goto menu

:phase1
echo.
echo Building Phase 1 - Foundations...
cd 01-foundations
if exist build.bat (
    call build.bat
) else (
    echo Building Phase 1 programs...
    for %%f in (*.c) do (
        echo Compiling %%f...
        gcc -Wall -Wextra -std=c99 -g "%%f" -o "%%~nf.exe"
    )
)
cd ..
echo Phase 1 build completed!
pause
goto menu

:phase2
echo.
echo Building Phase 2 - Core Concepts...
cd 02-core-concepts
echo Building Phase 2 programs...
for %%f in (*.c) do (
    if exist "%%f" (
        echo Compiling %%f...
        gcc -Wall -Wextra -std=c99 -g "%%f" -o "%%~nf.exe"
    )
)
cd ..
echo Phase 2 build completed!
pause
goto menu

:phase3
echo.
echo Phase 3 - Intermediate (Coming Soon)
echo This phase will cover advanced C features.
pause
goto menu

:phase4
echo.
echo Phase 4 - Advanced (Coming Soon)
echo This phase will cover data structures and algorithms.
pause
goto menu

:phase5
echo.
echo Phase 5 - System Programming (Coming Soon)
echo This phase will cover OS interaction and system calls.
pause
goto menu

:phase6
echo.
echo Phase 6 - Scalable Applications (Coming Soon)
echo This phase will cover large project development.
pause
goto menu

:phase7
echo.
echo Phase 7 - C++ Transition (Coming Soon)
echo This phase will help transition from C to C++.
pause
goto menu

:buildall
echo.
echo Building All Available Phases...
echo.

echo Building Phase 1...
cd 01-foundations
for %%f in (*.c) do (
    if exist "%%f" (
        echo Compiling %%f...
        gcc -Wall -Wextra -std=c99 -g "%%f" -o "%%~nf.exe"
    )
)
cd ..

echo Building Phase 2...
cd 02-core-concepts
for %%f in (*.c) do (
    if exist "%%f" (
        echo Compiling %%f...
        gcc -Wall -Wextra -std=c99 -g "%%f" -o "%%~nf.exe"
    )
)
cd ..

echo All available phases built successfully!
pause
goto menu

:clean
echo.
echo Cleaning all compiled files...
for /d %%d in (*) do (
    if exist "%%d\*.exe" (
        echo Cleaning %%d...
        del "%%d\*.exe" 2>nul
        del "%%d\*.o" 2>nul
    )
)
echo Clean completed!
pause
goto menu

:exit
echo.
echo Thank you for using the C Learning Build System!
echo Happy coding! 🚀
echo.
pause
exit /b 0
