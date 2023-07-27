#include <stdio.h>
int	ft_fibonacci(int index);

int	main(void)
{
	printf("Fibonacci de %d = %d\n", -2, ft_fibonacci(-2));
	printf("Fibonacci de %d = %d\n", -1, ft_fibonacci(-1));
	printf("Fibonacci de %d = %d\n", -0, ft_fibonacci(-0));
	printf("Fibonacci de %d = %d\n", 1, ft_fibonacci(1));
	printf("Fibonacci de %d = %d\n", 2, ft_fibonacci(2));
	printf("Fibonacci de %d = %d\n", 3, ft_fibonacci(3));
	printf("Fibonacci de %d = %d\n", 4, ft_fibonacci(4));
	printf("Fibonacci de %d = %d\n", 5, ft_fibonacci(5));
	printf("Fibonacci de %d = %d\n", 6, ft_fibonacci(6));
	printf("Fibonacci de %d = %d\n", 7, ft_fibonacci(7));
	printf("Fibonacci de %d = %d\n", 8, ft_fibonacci(8));
}
