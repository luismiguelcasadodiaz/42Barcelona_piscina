/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:43:37 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/25 18:16:27 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	if (str != NULL)
	{
		while (str[idx] != '\0')
			idx++;
	}
	return (idx);
}

char	*ft_clean(char *txt)
{
	return (txt);
}

int	ft_pos_num(char *txt)
{
	int	len;
	int	weight;
	int	sum;

V	sum = 0;
	weight = 1;
	len = ft_strlen(txt);
	while (len >= 1)
	{
		sum += weight * (txt[--len] - 48);
		weight = weight * 10;
	}
	return (sum);
}

int	ft_numerize(char *txt)
{
	if (txt[0] = '-')
	{
		if (!ft_strcmp(txt , "-2147483648"))
			return (INT_MIN);
		else
		{
		}
	}
	else
		return (ft_positive_atoi(txt)
}

int	ft_atoi(char *str)
{
	return (ft_numerize(ft_clean(str)));
}
