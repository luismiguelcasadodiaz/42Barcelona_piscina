#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	i;

	for (i= -30; i < 31; i++)
		printf("Es %d primo %d\n", i, ft_find_next_prime(i));
}
