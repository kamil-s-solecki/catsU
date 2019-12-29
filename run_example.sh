#!/bin/bash

lib="$(pwd)/build/lib"
includes="$(pwd)/build/includes"

gcc -L$lib -I$includes -Wl,-rpath=$lib -o build/example example/*.c -lcatsu

build/example
