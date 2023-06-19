#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -shared -o liball.so *.c
