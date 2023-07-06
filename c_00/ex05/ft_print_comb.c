/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:05:49 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/06 14:42:04 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	show_numbers(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, ", ", 2);
}

void	clean_last_separator(void)
{
	int	bs;

	bs = 8;
	write(1, &bs, 1);
	write(1, &bs, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				show_numbers(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	clean_last_separator();
}
