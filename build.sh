#! /usr/env bash

if [ -z $1 ]; then
    echo "ERROR: LIBRARY_IMPLEMENTATION not specified."
    echo "usage: build.sh <LIBRARY_IMPLEMENTATION={1 | 2 | 3}>"
    echo "example: build.sh 1"
else
    export PROJECT_ROOT=$(readlink -f $(dirname ${BASH_SOURCE[0]}))
    export LIBRARY_IMPLEMENTATION=$1
    rm -rf out
    cmake -S ${PROJECT_ROOT}/source -B ${PROJECT_ROOT}/out/build -DCMAKE_INSTALL_PREFIX=${PROJECT_ROOT}/out -DLIBRARY_IMPLEMENTATION=${LIBRARY_IMPLEMENTATION}
    make -C out/build install
fi
