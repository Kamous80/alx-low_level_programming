#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o liball.so
gcc -c main.c -o main.o
gcc -o main main.o -L. -liball.so
export LD_LIBRARY_PATH=:/alx-low_level_programming/0x18-dynamic_libraries
