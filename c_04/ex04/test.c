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
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/*
  INT_MAX =  2147483647 
  INT_MIN = -2147483648
            12345678901
		   I need an 11 bytes string for representing any INT.
		   plus \0 for finishing the string end ==> 12
*/ 

void	ft_putnbr_base(int nb, char *base);
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

void	treat_number(int nb)
{
	if (nb > 9)
	{
		treat_number(nb / 10);
	}
	write(1, &"0123456789"[nb % 10], 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (INT_MIN == nb)
	{
		write(1, &"-2147483648", 11);
	}
	else if (INT_MIN < nb && nb < 0)
	{
		write(1, "-", 1);
		treat_number(-nb);
	}
	else
	{
		treat_number(nb);
	}
}

void	prueba(int nbr, char *base)
{
	ft_putstr("El número ");
	ft_putnbr(nbr);
	ft_putstr(" en base ");
	ft_putstr(base);
	ft_putstr(" es ");
	ft_putnbr_base(nbr, base);
	ft_putstr("\n");
}
int	main(void)
{
	prueba(-2147483648, "01");
	prueba(-2147483648, "012");
	prueba(-2147483648, "0123");
	prueba(-2147483648, "01234");
	prueba(-2147483648, "012345");
	prueba(-2147483648, "0123456");
	prueba(-2147483648, "01234567");
	prueba(-2147483647, "01");
	prueba(-2147483647, "012");
	prueba(-2147483647, "0123");
	prueba(-2147483647, "01234");
	prueba(-2147483647, "012345");
	prueba(-2147483647, "0123456");
	prueba(-2147483647, "01234567");
	prueba(-2147483647, "poniguay");
	prueba(-2147, "4321");
	prueba(-1, "0123456789abcdef");
	prueba(0, ".-");
	prueba(1, ".-");
	prueba(2147483646, "01");
	prueba(2147483647, "01");
}
