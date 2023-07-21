#!/bin/sh
norminette -R CheckForbiddenSourceHeader $1
cc  -Wall -Wextra -Werror -o test test.c $1
./test
