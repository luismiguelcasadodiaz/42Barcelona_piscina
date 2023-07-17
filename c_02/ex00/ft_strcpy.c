/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:30:44 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/13 19:11:31 by luicasad         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;
	int	src_size;

	if (src != NULL && dest != NULL)
	{
		src_size = ft_strlen(src);
		//dest = (char *)malloc((src_size +1) * sizeof(char));
		idx = 0;
		while (idx <= src_size)
		{
			dest[idx] = src[idx];
			idx++;
		}
		dest[idx] = '\0';
	}
	return (dest);
}
