#include <stdio.h>
int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d^%d = %d\n", -2, -1, ft_iterative_power(-2, -1));
	printf("%d^%d = %d\n", 0, -1, ft_iterative_power(0, -1));
	printf("%d^%d = %d\n", -2, 0, ft_iterative_power(-2, 0));
	printf("%d^%d = %d\n", 0, 0, ft_iterative_power(0, 0));
	printf("%d^%d = %d\n", 0, 1, ft_iterative_power(0, 1));
	printf("%d^%d = %d\n", 0, 2, ft_iterative_power(0, 2));
	printf("%d^%d = %d\n", 1, 0, ft_iterative_power(1, 0));
	printf("%d^%d = %d\n", 1, 1, ft_iterative_power(1, 1));
	printf("%d^%d = %d\n", 1, 2, ft_iterative_power(1, 2));
	printf("%d^%d = %d\n", 2, 0, ft_iterative_power(2, 0));
	printf("%d^%d = %d\n", 2, 1, ft_iterative_power(2, 1));
	printf("%d^%d = %d\n", 2, 2, ft_iterative_power(2, 2));
	printf("%d^%d = %d\n", 3, 0, ft_iterative_power(3, 0));
	printf("%d^%d = %d\n", 3, 1, ft_iterative_power(3, 1));
	printf("%d^%d = %d\n", 3, 2, ft_iterative_power(3, 2));
	printf("%d^%d = %d\n", -3, 0, ft_iterative_power(-3, 0));
	printf("%d^%d = %d\n", -3, 1, ft_iterative_power(-3, 1));
	printf("%d^%d = %d\n", -3, 2, ft_iterative_power(-3, 2));
	printf("%d^%d = %d\n", -3, 3, ft_iterative_power(-3, 3));
	printf("%d^%d = %d\n", -3, 4, ft_iterative_power(-3, 4));
}
