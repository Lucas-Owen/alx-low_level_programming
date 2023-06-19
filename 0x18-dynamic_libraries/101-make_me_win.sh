#!/bin/bash
wget -P .. https://github.com/Lucas-Owen/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libatoi.so
export LD_PRELOAD="$PWD/../libatoi.so"
