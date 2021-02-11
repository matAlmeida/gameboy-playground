cd src

C:\GB\gbdk\bin\lcc -Wa-l -Wl-m -Wf--debug -Wl-y -DUSE_SFR_FOR_REG -c -o main.o main.c
C:\GB\gbdk\bin\lcc -Wa-l -Wl-m -Wf--debug -Wl-y -DUSE_SFR_FOR_REG -o main.gb main.o

move    "main.adb" "..\dist"
move    "main.asm" "..\dist"
move    "main.cdb" "..\dist"
move    "main.gb"  "..\dist"
move    "main.ihx" "..\dist"
move    "main.lst" "..\dist"
move    "main.map" "..\dist"
move    "main.o"   "..\dist"
move    "main.sym" "..\dist"