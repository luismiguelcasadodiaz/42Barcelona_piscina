/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:40:42 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 10:47:49 by luicasad         ###   ########.fr       */
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

int	ft_punct_char(int c)
{
	int	result;

	result = 0;
	result += ft_in_rng(32, 47, c);
	result += ft_in_rng(58, 64, c);
	result += ft_in_rng(91, 96, c);
	result += ft_in_rng(123, 126, c);
	return (result);
}

char	treat_char(int c, int *in_word, int *first_c)
{
	if (ft_punct_char(c))
	{
		*in_word = 0;
		*first_c = 0;
	}
	else
	{
		if (!(*in_word))
		{
			*in_word = 1;
			*first_c = 1;
			if (97 <= c && c <= 122)
				c -= 32;
		}
		else
		{
			if (65 <= c && c <= 90)
				c += 32;
			if (*first_c)
				*first_c = 0;
		}
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		idx;
	int		in_word;
	int		first_c;

	if (str != NULL)
	{
		in_word = 0;
		first_c = 0;
		idx = -1;
		while (str[++idx] != '\0')
			str[idx] = treat_char((int)str[idx], &in_word, &first_c);
	}
	return (str);
}
