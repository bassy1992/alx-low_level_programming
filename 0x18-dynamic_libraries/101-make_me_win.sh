#!/bin/bash
wget -q -O ../ https://github.com/bassy1992/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libmask.so?raw=true
export LD_PRELOAD= ../libmask.so
