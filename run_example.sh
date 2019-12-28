#!/bin/bash

lib="$(pwd)/build/lib"
includes="$(pwd)/build/includes"

cd example
gcc -L$lib -I$includes -Wl,-rpath=$lib -o main *.c -lcunit

./main
