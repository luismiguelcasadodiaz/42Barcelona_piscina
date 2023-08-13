#include <unistd.h>
#include "board.h"
#include "vector.h"

#define	SIZE 10

void	queens(int k, int**vector, int *n)
{
	int promise;
	int promise_ok;

	if (k == SIZE)
	{
		*n = *n + 1;
		/*show_board(vector, SIZE, n);*/
		show_vector(vector, SIZE);
	}
	else
	{
		promise = -1;
		
		while (++promise < SIZE)
		{
			*vector[k + 1] = promise;
			promise_ok = col_ok(vector, k + 1);
			if (promise_ok)
			{
				queens(k + 1, vector, n);
			}
			else
				*vector[k + 1] = 0;
		}
	}
}

int	main(void)
{
	int **vector;
	int solutions;

	solutions = 0;

	vector = create_vector(SIZE);
	queens(0, vector, &solutions);
	*vector[0] = 0;
	*vector[1] = 4;
	*vector[2] = 1;
	*vector[3] = 7;
	*vector[4] = 2;
	*vector[5] = 5;
	*vector[6] = 3;
	*vector[7] = 6;
	*vector[8] = 8;
	*vector[9] = 9;
	show_board(vector, SIZE, &solutions);
	show_vector(vector, SIZE);
	if (col_ok(vector, 4))
		write(1, &"col OK\n", 7);
	else
		write(1, &"col KO\n", 7);
	free_vector(vector,SIZE);
	return (0);
}
