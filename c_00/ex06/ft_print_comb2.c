/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:45:50 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/11 15:24:35 by luicasad         ###   ########.fr       */
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

/* first line has not initial separator
 *
 */

void	show_couple(int num1, int num2, int first_line)
{
	if (first_line)
	{
		show_number(num1);
		write(1, " ", 1);
		show_number(num2);
	}
	else
	{
		write(1, ", ", 2);
		show_number(num1);
		write(1, " ", 1);
		show_number(num2);
	}
}

/*
 * num2 = num1 + 1; allow to do 00 98, 00 99, 01 02, 01 03
 *
 */
void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	first_line;

	first_line = 1;
	num1 = 0;
	while (num1 < 100)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			show_couple(num1, num2, first_line);
			num2++;
			first_line = 0;
		}
		num1++;
	}
}
