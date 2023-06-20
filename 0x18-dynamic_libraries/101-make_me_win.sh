#!/bin/bash
gcc -fPIC -c inject.c
gcc -shared -o injectlib.so inject.o
LD_PRELOAD=/$PWD/injectlib.so ./gm 9 8 10 24 75 9
