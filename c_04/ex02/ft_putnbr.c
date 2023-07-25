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
