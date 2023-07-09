/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:45:50 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/09 15:21:24 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_number(int num)
{
	int	firsnum;
	int	lastnum;

	firsnum = 48 + num / 10;
	lastnum = 48 + num % 10;
	write(1, &firsnum, 1);
	write(1, &lastnum, 1);
}

void	show_couple(int num1, int num2)
{
	show_number(num1);
	write(1, " ", 1);
	show_number(num2);
	write(1, ", ", 2);
}

void	clean_last_separator(void)
{
	int	bs;

	bs = 8;
	write(1, &bs, 1);
	write(1, &bs, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 100)
	{
		num2 = num1 + 1; // makes posible 01 98, 01 99, 02 03,
		while (num2 < 100)
		{
			show_couple(num1, num2);
			num2++;
		}
		num1++;
	}
	clean_last_separator();
}
