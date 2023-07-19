/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:36:00 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 09:57:52 by luicasad         ###   ########.fr       */
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

int	ft_lower_char(int c)
{
	return (ft_in_rng(97, 122, c));
}

int	ft_str_is_lowercase(char *str)
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
				if (!ft_lower_char((int)str[idx]))
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
