#!/bin/bash -x
gcc *.c -c -FPIC &&
gcc *.o -shared -o liball.so
