/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:35:32 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/27 22:19:06 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* al integer it is divisible for 1 and by him self, so i set c = 2.          */
/* In  c i will count the number of divisors i found                          */
/* at the end if C keep as 2 it means i have a prime number                   */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	c;
	int	divisor;
	int	division;

	if (0 < nb)
	{
		if (nb == 0 || nb == 1)
			return (0);
		c = 2;
		divisor = 2;
		while (divisor < nb)
		{
			division = nb / divisor;
			c = c + ((division * divisor) == nb);
			divisor++;
		}
		if (c == 2)
			return (1);
		else
			return (0);
	}
	return (0);
}
