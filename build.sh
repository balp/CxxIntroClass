#!/bin/sh
if command -v scan-build ; then
  mkdir -p build-scan-build
  ( cd build-scan-build ; env CC=clang CXX=clang++ scan-build cmake .. && scan-build make all )
fi

if command -v clang ; then
  mkdir -p build-llvm
  ( cd build-llvm ; env CC=clang CXX=clang++ cmake .. && make all && ctest -VV )
fi

if command -v gcc ; then
  mkdir -p build-gcc
  ( cd build-gcc ; env CC=gcc CXX=g++ cmake .. && make all && ctest -VV )
fi
