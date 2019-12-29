#!/bin/bash

lib="$(pwd)/build/lib"
build_includes="$(pwd)/build/includes"
src_includes="$(pwd)/example/src"

gcc -L$lib -iquote $build_includes -iquote $src_includes -Wl,-rpath=$lib -o build/example example/src/*.c example/test/*.c -lcatsu

build/example
