/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:39:42 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 10:31:48 by luicasad         ###   ########.fr       */
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

int	ft_upper_char(int c)
{
	return (ft_in_rng(65, 90, c));
}

char	*ft_strlowcase(char *str)
{
	int		idx;

	if (str != NULL)
	{
		if (str[0] != '\0')
		{
			idx = -1;
			while (str[++idx] != '\0')
				if (ft_upper_char((int)str[idx]))
					str[idx] += 32;
		}
	}
	return (str);
}
