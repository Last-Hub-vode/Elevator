run:all

all:elevator.exe

elevator.exe: elevator.c math.h
	gcc elevator.c -o elevator.exe