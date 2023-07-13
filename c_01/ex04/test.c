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

int	main(void)
{
	int	*pa;
	int	*pb;
	int	a;
	int	b;

	a = 43;
	b = 7;
	pa = &a;
	pb = &b;
	printf("El valor de a es %d\n", a);
	printf("El valor de b es %d\n", b);
	ft_ultimate_div_mod(pa, pb);
	printf("El valor de la division es %d\n", *pa);
	printf("El valor del resto es  es %d\n\n", *pb);
	a = 43;
	b = 0;
	pa = &a;
	pb = &b;
	printf("El valor de a es %d\n", a);
	printf("El valor de b es %d\n", b);
	ft_ultimate_div_mod(pa, pb);
	printf("El valor de la division es %d\n", *pa);
	printf("El valor del resto es  es %d\n\n", *pb);
	a = 43;
	b = 7;
	pa = NULL;
	pb = &b;
	printf("La direccion de a es %p\n", NULL);
	printf("El valor de b es %d\n", b);
	ft_ultimate_div_mod(pa, pb);
	printf("El valor de la division es %p\n", NULL);
	printf("El valor del resto es  es %d\n\n", *pb);
}
