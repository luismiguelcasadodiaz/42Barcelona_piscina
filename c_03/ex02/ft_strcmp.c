/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:32:58 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 18:04:29 by luicasad         ###   ########.fr       */
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
/* ft_strlcpy copy src into a buffer dst with size spaces                     */
/*            null termitates the copy                                        */
/* RETURNS    size of src string.                                             */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	src_size;

	src_size = 0;
	if (src != NULL && dest != NULL)
	{
		src_size = ft_strlen(src);
		if (size > 0)
		{
			idx = 0;
			while (idx < size - 1 && idx <= src_size)
			{
				dest[idx] = src[idx];
				idx++;
			}
			dest[idx] = '\0';
		}
	}
	return (src_size);
}
