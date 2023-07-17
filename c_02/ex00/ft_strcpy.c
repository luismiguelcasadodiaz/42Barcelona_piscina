/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:30:44 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/17 20:58:17 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

/* ************************************************************************** */
/* ft_strlen counts all char in str but last one when it is '\0' bounded      */
/*                                                                            */
/* ************************************************************************** */
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

/* ************************************************************************** */
/* ft_strcpy copies src, including '\0' into dst.                             */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	idx;
	int	src_size;

	if (src != NULL && dest != NULL)
	{
		src_size = ft_strlen(src);
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
