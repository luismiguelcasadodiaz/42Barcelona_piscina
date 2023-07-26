/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:57:24 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/26 20:11:25 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	treat_number(int nb)
{
	int	aux;

	if (0 < nb)
	{
		if (9 < nb)
		{
			treat_number(nb / 10);
		}
		write(1, &"0123456789"[nb % 10], 1);
	}
	else
	{
		if (nb < -9)
		{
			treat_number(nb / 10);
		}
		aux = nb % 10;
		write(1, &"0123456789"[-aux], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (INT_MIN <= nb && nb < 0)
		write(1, "-", 1);
	treat_number(nb);
}
