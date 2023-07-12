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
/*	int	mod;
	int	div;
	mod = 0;
	div = 0;
*/
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	*pdiv;
	int	*pmod;
	int	a;
	int	b;

	a = 24;
	b = 6;
	pdiv = &a;
	pmod = &b;
	printf("El valor de a es %d\n", a);
	printf("El valor de b es %d\n", b);
	ft_div_mod(a, b, pdiv, pmod);
	printf("El valor de la division es %d\n", *pdiv);
	printf("El valor del resto es  es %d\n", *pmod);
	printf("El valor de a es %d\n", a);
	printf("El valor de b es %d\n", b);
}
