@echo off

cd src

C:/GB/gbdk/bin/lcc -Wa-l -Wl-m -Wf--debug -Wl-y -DUSE_SFR_FOR_REG -c ./utils/math.c
C:\GB\gbdk\bin\lcc -Wa-l -Wl-m -Wf--debug -Wl-y -DUSE_SFR_FOR_REG -c -o main.o main.c
C:\GB\gbdk\bin\lcc -Wa-l -Wl-m -Wf--debug -Wl-y -DUSE_SFR_FOR_REG -o main.gb main.o math.o

move    "*.adb" "..\dist"   >nul
move    "*.asm" "..\dist"   >nul
move    "*.cdb" "..\dist"   >nul
move    "*.gb"  "..\dist"   >nul
move    "*.ihx" "..\dist"   >nul
move    "*.lst" "..\dist"   >nul
move    "*.map" "..\dist"   >nul
move    "*.o"   "..\dist"   >nul
move    "*.sym" "..\dist"   >nul
