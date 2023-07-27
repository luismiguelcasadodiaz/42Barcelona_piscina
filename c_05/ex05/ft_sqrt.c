#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	solution;
	int	aux;

	solution = nb;
	aux = 0;
	while (aux < solution)
	{
		aux = solution;
		solution = (solution + (nb / solution)) / 2;
	}
	printf("i??%d", solution);
//	if (solution * solution == nb)
		return (solution);
//	else
//		return (0);
}
