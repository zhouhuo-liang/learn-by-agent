@echo off
rem Usage: build_c.bat name  (no .c), e.g. build_c.bat hello
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /W4 /std:c17 /Fe:%1.exe %1.c
if errorlevel 1 goto :end
%1.exe
:end
