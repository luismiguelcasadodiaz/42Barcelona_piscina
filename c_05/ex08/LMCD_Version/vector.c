#include <stdlib.h>
#include <unistd.h>
#include "vector.h"

/* CREATE_VECTOR creates one more pointer than needed. The aim of this is */
/* refering row in a base 1 scheme                                        */
int	**create_vector(int size)
{
	int **buff;
	int idx;

	buff = (int **)malloc((size + 1) * sizeof(int *));
	idx = -1;
	while (++idx < size + 1)
	{
		buff[idx] = (int *)malloc(sizeof(int));
		*buff[idx] = 0;
	}
	return (buff);
}

void	free_vector(int **vector, int size)
{
	int idx;

	idx = -1;
	while (++idx <= size)

	{
		free(vector[idx]);
	}
	free(vector);
}
int	col_ok(int **vector, int n)
{
	int	idxe;
	int	idxi;
	int	ok;

	ok = 1;
	idxe = 0;
	while (ok && ++idxe < n)
	{
		idxi = idxe + 1;
		while (ok && idxi <= n)
		{
			ok = (*vector[idxe] != *vector[idxi]);
			ok = ok && dia_ok(idxe, *vector[idxe], idxi, *vector[idxi]);
			idxi++;
		}
	}
	return (ok);
}
/* dia_ok starts with the hypotesis that is OK, so variable KO starts     */
/* with value 0.                                                          */
/*                                                                        */
/* This function return !ko cause its name is dia_ok                      */
/* ********************************************************************** */
int	dia_ok(int i, int j, int k, int l)
{
	int ko;

	ko = (i - j == k - l);
	ko = ko || (i + j == k + l);
	ko = ko || (j - l == i - k);
	ko = ko || (j - l == k - i);
	return (!ko);
}


void	show_vector(int **vector, int size)
{
	int idx;

	idx = 0;
	while (++idx <= size)
		write(1, &"0123456789"[*vector[idx]], 1);
	write(1, &"\n", 1);
}
