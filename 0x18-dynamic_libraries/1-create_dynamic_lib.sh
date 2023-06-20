#!/bin/bash
# Compile the source files into object files
gcc -c -Wall -Werror -fpic *.c
# Create the dynamic library
gcc -shared -o liball.so *.o
