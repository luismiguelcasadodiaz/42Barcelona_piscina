#!/bin/sh
norminette -R CheckForbiddenSourceHeader $1
cc -g -Wall -Wextra -Werror test.c $1
./a.out
