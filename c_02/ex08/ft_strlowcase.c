/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:39:42 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 19:37:50 by luicasad         ###   ########.fr       */
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

int	ft_upper_char(int c)
{
	return (ft_in_rng(65, 90, c));
}

char	*ft_strlowcase(char *str)
{
	int		idx;
	char	*locase;

	locase = NULL;
	if (str != NULL)
	{
		if (str[0] != '\0')
		{
			locase = create_buffer(str);
			idx = -1;
			while (str[++idx] != '\0')
			{
				if (ft_upper_char((int)str[idx]))
					locase[idx] = (int)str[idx] + 32;
				else
					locase[idx] = (int)str[idx];
			}
			locase[idx] = '\0';
		}
	}
	return (locase);
}
