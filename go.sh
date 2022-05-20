#!/bin/sh
git stash
git pull
printf "\033c"
gcc main.c -o main.out
./main.out
