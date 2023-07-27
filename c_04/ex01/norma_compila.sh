#!/bin/sh
norminette -R CheckForbiddenSourceHeader $1
cc -g -Wall -Wextra -Werror -o test test.c  $1
./test
