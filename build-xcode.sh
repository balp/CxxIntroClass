#!/bin/sh

if command -v xcodebuild ; then
  mkdir -p build-xcode
  ( cd build-xcode ; cmake -G Xcode .. && xcodebuild && xcodebuild -target RUN_TESTS )
fi

