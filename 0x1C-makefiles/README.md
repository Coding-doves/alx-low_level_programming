# 0x1C. C - Makefiles

CC=gcc

CFLAGS= -g -Wall

all: prog

prog: main.o school.o
$(CC) main.o school.o -o school

main.o: main.c
$(CC) $(CFLAGS) main.c

school.o: school.c
$(CC) $(CFLAGS) school.c

clean:
rm -rf *.o
