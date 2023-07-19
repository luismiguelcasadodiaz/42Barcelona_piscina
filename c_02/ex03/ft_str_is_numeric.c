/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:34:52 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 09:59:52 by luicasad         ###   ########.fr       */
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

int	ft_numer_char(int c)
{
	return (ft_in_rng(48, 57, c));
}

int	ft_str_is_numeric(char *str)
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
				if (!ft_numer_char((int)str[idx]))
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
