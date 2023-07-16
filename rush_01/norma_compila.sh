#!/bin/sh
norminette -R CheckForbiddenSourceHeader  *.c
cc -g  -Wall -Wextra -Werror -o rush-01 *.c 
./rush-01
