/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:09:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/11 18:13:30 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	prueba(int a, int b)
{
	int	*pa;
	int	*pb;
	
	pa = &a;
	pb = &b;
	printf("El valor de a es %d\n", a);
	printf("El valor de b es %d\n", b);
	printf("Su division es %d\n", a / b );
	printf("Su resto es  es %d\n\n", a % b);
	ft_ultimate_div_mod(pa, pb);
	printf("Mi division es %d\n", *pa);
	printf("Mi resto es  es %d\n\n", *pb);
}

int	main(void)
{
	prueba(43, 7);
	prueba(43, -7);
	prueba(-43, 7);
	prueba(-43, -7);
	prueba(2147483647, 7);
	prueba(2147483647, -2147483648);
	prueba(2147483647, 2147483648);
	prueba(-2147483648, 2147483647);
	prueba(43, 0);
}
