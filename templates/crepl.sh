#!/bin/bash
# usage: crepl myfile.c
gcc -std=c99 -Wall -Wextra -Wpedantic -Werror $1 -o tempout &&\
    ./tempout && rm tempout