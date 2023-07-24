/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:42:43 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 21:27:26 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* ************************************************************************** */
/* ft_hex_of prints a integer < 128 .                                         */
/* NON printable char are printed according to the theme                      */
/* 	theme = 0 print a point '.'                                               */
/*  theme = 1 print wiht slash  '\0a'                                         */	
/*  theme = 2 print regular template '0a'                                     */
/* ************************************************************************** */
void	ft_hex_of(int num, int theme)
{
	int	dot;
	int	backslash;

	dot = 46;
	backslash = 92;
	if (theme == 0)
		write(1, &dot, 1);
	else
	{
		if (theme == 1)
			write(1, &backslash, 1);
		write(1, &"0123456789abcdef"[num / 16], 1);
		write(1, &"0123456789abcdef"[num % 16], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((0 <= str[idx] && str[idx] <= 31) || str[idx] == 127)
			ft_hex_of((int)str[idx], 1);
		else
			write(1, &str[idx], 1);
		idx++;
	}
}
