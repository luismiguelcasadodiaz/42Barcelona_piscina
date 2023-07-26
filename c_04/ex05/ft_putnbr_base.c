/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:57:24 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/26 21:21:55 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	treat_number_base(int nb, char *base, int num_base)
{
	int	aux;

	if (0 <= nb)
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
		aux = nb % num_base;
		write(1, &base[-aux], 1);
	}
}

void	treat_positive(int nb, char *base, int num_base)
{
	if ((num_base -1) < nb)
	{
		treat_positive(nb / num_base, base, num_base);
	}
	write(1, &base[nb % num_base], 1);
}

void	treat_negative(int nb, char *base, int num_base)
{
	int	aux;

	if (nb < (1 - num_base))
	{
		treat_negative(nb / num_base, base, num_base);
	}
	aux = nb % num_base;
	write(1, &base[-aux], 1);
}
/* ************************************************************************** */
/* ft_putnbr_ base validates the base wiht this criteria                      */
/*                 1.- has not '-' or '+'.                                    */
/*                 2.- has not repeated chars                                 */
/*                 3.- has lenght > 1                                         */
/*             A non validated base makes function oputput nothing            */
/* ************************************************************************** */

void	ft_putnbr_base(int nb, char *base)
{
	int	num_base;
	int	j;
	int	ok;

	ok = 1;
	num_base = -1;
	while (ok && base[++num_base] != '\0')
	{
		j = num_base + 1;
		ok = (base[num_base] != '+' && base[num_base] != '-');
		while (ok && base[j] != '\0')
			ok = (base[num_base] != base[j++]);
	}
	if (ok && num_base > 1)
	{
		if (INT_MIN <= nb && nb < 0)
		{
			write(1, "-", 1);
			treat_negative(nb, base, num_base);
		}
		else
			treat_positive(nb, base, num_base);
	}
}
/*
 * -2147483647 -1111111111111111111111111111111  YO
 * -2147483647 -1111111111111111111111111111111  BC
 *
 * -2147483648 -10000000000000000000000000000000 YO
 * -2147483648 -10000000000000000000000000000000 BC 
 *
 *  2147483647 1111111111111111111111111111111 YO
 *  2147483647 1111111111111111111111111111111 BC
 */
