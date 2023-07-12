/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:57:24 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 21:28:44 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	show_sign(int nb)
{
	int	sign;

	sign = 45;
	if (nb < 0)
	{
		write(1, &sign, 1);
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
	int	quo;
	int	mod;

	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb == INT_MIN)
	{
		quo = nb / 10;
		quo = quo * -1;
		mod = 48 + -1 * (nb % 10);
		write(1, "-", 1);
		treat_number(quo);
		write(1, &mod, 1);
	}
	else
	{
		treat_number(nb);
	}
}
