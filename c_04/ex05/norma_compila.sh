#!/bin/sh
norminette -R CheckForbiddenSourceHeader $1
cc -g -Wall -Wextra -Werror -o test test.c ft_putnbr.c $1
./test
