@echo off
rem Usage: build.bat name  (no .cpp), e.g. build.bat hello
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
cl /nologo /EHsc /W4 /std:c++17 /Fe:%1.exe %1.cpp
if errorlevel 1 goto :end
%1.exe
:end
