/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:32:58 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/21 14:55:05 by luicasad         ###   ########.fr       */
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
/* ft_strcat concatenates src, after dst (overwriting its null termination.   */
/*            null termitates the copy                                        */
/* RETURNS    size of src string.                                             */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				idx_dest;
	unsigned int	idx_src;

	if (src != NULL && dest != NULL)
	{
		idx_dest = ft_strlen(dest);
		idx_src = 0;
		while (idx_src < nb && src[idx_src] != '\0')
		{
			dest[idx_dest++] = src[idx_src++];
		}
		dest[idx_dest] = '\0';
	}
	return (dest);
}
