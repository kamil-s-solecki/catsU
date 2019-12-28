#!/bin/bash

rm -rf build


cd src
gcc -c -fpic *.c

cd ..
mkdir -p build/lib

gcc -shared -o build/lib/libcunit.so src/*.o 

mkdir -p build/includes
cp src/*.h build/includes/
