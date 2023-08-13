#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "board.h"

void	show_board(int **vector, int size, int *n)
{
		int idx;

		idx = 0;
		while (++idx <= size)
				show_line(*vector[idx], size);
		printf("%d ----------\n", *n);
}

void	show_line(int col, int size)
{
		show_cols(col - 1);
		write(1, &"Q ", 2);
		show_cols(size - col);
		write(1, &"\n", 1);
}

void	show_cols(int n)
{
		int i;

		i = 0;
		while (++i <= n)
				write(1, &". ",2);

}
