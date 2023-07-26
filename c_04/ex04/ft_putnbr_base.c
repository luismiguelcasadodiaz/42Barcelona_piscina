/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:57:24 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/25 16:29:34 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	treat_number_base(int nb, char *base, int num_base)
{
	if (nb >= 0)
	{
		if ((num_base -1) < nb)
		{
			treat_number_base(nb / num_base, base, num_base);
		}
		write(1, &base[nb % num_base], 1);
	}
	else
	{
		if (nb < (num_base -1))
		{
			treat_number_base(nb / num_base, base, num_base);
		}
		write(1, &base[nb % num_base], 1);
	}
}

void	ft_putnbr_base(int nb, char *base)
{
	int num_base;

	num_base = -1;
	while (base[++num_base] != '\0')
	{
	}
	if (nb == 0)
	{
		write(1, &base[0], 1);
	}
	else if (INT_MIN == nb)
	{
		write(1, &"-", 1);
		write(1, &base[num_base - 1], 1);
		treat_number_base(nb/num_base, base, num_base);
	}
	else if (INT_MIN < nb && nb < 0)
	{
		write(1, "-", 1);
		treat_number_base(-nb, base, num_base);
	}
	else
	{
		treat_number_base(nb, base, num_base);
	}
}
/*
-10000000000000000000000000000000
-10000000000000000000000000000000 BC
-10000000000000000000000000000000 YO
 */
