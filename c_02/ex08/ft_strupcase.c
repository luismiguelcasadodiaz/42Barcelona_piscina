/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:38:46 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 19:20:42 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

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

char	*create_buffer(char *src)
{
	int		src_size;
	char	*buffer;

	src_size = ft_strlen(src);
	buffer = (char *)malloc((src_size + 1) * sizeof(char));
	if (buffer == NULL)
	{
		write(1, "Error Dynamic memory\n", 21);
		exit (1);
	}
	return (buffer);
}

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
	char	*upcase;

	upcase = NULL;

	if (str != NULL)
	{
		if (str[0] != '\0')
		{
			upcase = create_buffer(str);
			idx = -1;
			while (str[++idx] != '\0')
			{
				if (ft_lower_char((int)str[idx]))
					upcase[idx] = (int)str[idx] - 32;
				else
					upcase[idx] = (int)str[idx];
			}
			upcase[idx] = '\0';
		}
	}
	return (upcase);
}
