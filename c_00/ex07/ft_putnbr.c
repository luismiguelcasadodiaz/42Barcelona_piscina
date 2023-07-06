/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:57:24 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/06 20:26:32 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define NUM_DIGITS 11

void	show_sign(int *nb)
{
	int	sign;
	int aux;

	sign = 45;
	if (*nb < 0)
	{
		write(1, &sign, 1);
		aux = *nb;
		aux = -aux;
		*nb = aux; 
	}
}

int get_modulo(int *newnum)
{
	int modulo;
	int aux;

	aux = *newnum;
	modulo = aux % 10;
	aux = aux - modulo;
	aux = aux / 10;
	*newnum = aux;
	
	modulo = 48 + modulo;
	return (modulo);

}

void	treat_number(int nb)
{
	int	newnum;
	int num_array[11];
	int idx;
	int digit;

	idx = 0;
	newnum = nb;
	while (newnum != 0)
	{
		num_array[idx] = get_modulo(&newnum);
		idx++;
	}
	idx--;
	while (0 <= idx )
	{
		digit = num_array[idx];
		write(1, &digit, 1);
		idx--;
	}
}

void	ft_putnbr(int nb)
{

	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		show_sign(&nb);
		treat_number(nb);
	}
}
