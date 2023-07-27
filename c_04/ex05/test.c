/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:09:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/26 23:27:47 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_atoi_base(char *str, char *base);

void	ft_putstr(char *str)
{
	int	idx;

	if (str != NULL)
	{
		idx = 0;
		while (str[idx] != '\0')
			write(1, &str[idx++], 1);
	}
}

void	prueba(char *nbr, char *base)
{
	printf("El número %s ", nbr);
	printf(" en base %s ", base);
	printf("es %d\n", ft_atoi_base(nbr, base));
}

int	main(void)
{
	prueba("A", "AB");
	prueba("B", "AB");
	prueba("+243241", "4321");
	prueba("-oyyyyyyyyyy", "poniguay");
/*	prueba(+2147483646, "01");
	prueba(-2147483645, "01");
	prueba(+2147483645, "01022");
	prueba(-2147483648, "");
	prueba(-2147483648, "4");
	prueba(-2147483648, "012345");
	prueba(-2147483648, "0123+456");
	prueba(-2147483648, "0123-4567");
	prueba(-2147483647, "01");
	prueba(-2147483647, "012");
	prueba(-2147483647, "0123");
	prueba(-2147483647, "01234567");
	prueba(-2147483647, "poniguay");
	prueba(-2147, "4321");
	prueba(-1, "0123456789abcdef");
	prueba(0, "AB");
	prueba(1, "AB");
	prueba(2147483644, "AB");
	prueba(2147483645, "?%");
	prueba(2147483646, "01");
	prueba(2147483647, "01");
	prueba(0, "01");
	prueba(1, "01");
	prueba(7, "01");
	prueba(-0, "01");
	prueba(-1, "01");
	prueba(-7, "01");*/
}
