#!/bin/bash

# creates object files in current dir
gcc -c -fPIC *.c

# creates shared library from the object files created above
gcc -shared -o liball.so *.o

# check if the operation was a success
nm -D liball.so

# Tell gcc where to find the shared library
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
