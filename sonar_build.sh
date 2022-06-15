#! /bin/bash

autoreconf --install
./configure
make clean all