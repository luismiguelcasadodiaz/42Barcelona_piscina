/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:38:46 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 09:16:16 by luicasad         ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	int		idx;

	if (str != NULL)
	{
		if (str[0] != '\0')
		{
			idx = -1;
			while (str[++idx] != '\0')
				if (ft_lower_char((int)str[idx]))
					str[idx] -= 32;
		}
	}
	return (str);
}
