#include <stdio.h>
int	ft_sqrt(int index);
int	ft_sqrt2(int index);

int	main(void)
{
	printf("Raiz de %d = %d\n", -2, ft_sqrt(-2));
	printf("Raiz de %d = %d\n", -1, ft_sqrt(-1));
	printf("Raiz de %d = %d\n", -0, ft_sqrt(-0));
	printf("Raiz de %d = %d\n", 1, ft_sqrt(1));
	printf("Raiz de %d = %d\n", 2, ft_sqrt(2));
	printf("Raiz de %d = %d\n", 3, ft_sqrt(3));
	printf("Raiz de %d = %d\n", 4, ft_sqrt(4));
	printf("Raiz de %d = %d\n", 5, ft_sqrt(5));
	printf("Raiz de %d = %d\n", 6, ft_sqrt(6));
	printf("Raiz de %d = %d\n", 7, ft_sqrt(7));
	printf("Raiz de %d = %d\n", 8, ft_sqrt(8));
	printf("Raiz de %d = %d\n", 9, ft_sqrt(9));
	printf("Raiz de %d = %d\n", 11, ft_sqrt(11));
	printf("Raiz de %d = %d\n", 25, ft_sqrt(25));
	printf("Raiz de %d = %d\n", 26, ft_sqrt(26));
	printf("Raiz de %d = %d\n", 26, ft_sqrt(100));
	printf("Raiz de %d = %d\n", 26, ft_sqrt(150));
	printf("Raiz de %d = %d\n", 26, ft_sqrt(144));
}
