/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:33:56 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/20 19:22:44 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_in_rng(int min, int max, int c)
{
	if (min <= c && c <= max)
		return (1);
	else
		return (0);
}

int	ft_alpha_char(int c)
{
	int	result;

	result = 0;
	result += ft_in_rng(64, 90, c);
	result += ft_in_rng(97, 122, c);
	return (result);
}

int	ft_str_is_alpha(char *str)
{
	int	idx;
	int	solution;

	solution = 1;
	if (str != NULL)
	{
		solution = 0;
		if (str[0] != '\0')
		{
			solution = 1;
			idx = -1;
			while (str[++idx] != '\0')
			{
				if (!ft_alpha_char((int)str[idx]))
				{
					solution = 0;
					break ;
				}
			}
		}
		else
			solution = 1;
	}
	return (solution);
}
