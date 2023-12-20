#!/bin/bash -e

make clean; ./PRISM/build.sh; make -j $(nproc);
