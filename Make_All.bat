@echo off

set PS3DEV=./ps3dev
set PS3SDK=/c/PSDK3v2
set WIN_PS3SDK=C:/PSDK3v2
set PATH=%WIN_PS3SDK%/mingw/msys/1.0/bin;%WIN_PS3SDK%/mingw/bin;%PS3DEV%/ppu/bin;

rem %PATH%;

if exist mamba\lz\*.lz.bin del   mamba\lz\*.lz.bin>nul
if exist mamba\lz          rmdir mamba\lz

if exist mamba\debug\*.bin del   mamba\debug\*.bin>nul
if exist mamba\debug             rmdir mamba\debug

if exist mamba\*.bin del mamba\*.bin>nul
if exist mamba       rmdir mamba

if exist *.bin del /q *.bin>nul

if not exist mamba       mkdir mamba
if not exist mamba\lz    mkdir mamba\lz
if not exist mamba\debug mkdir mamba\debug

make clean --no-print-directory

rem make all --no-print-directory
make release --no-print-directory
rem make debug   --no-print-directory

rd mamba\lz>nul

pause
