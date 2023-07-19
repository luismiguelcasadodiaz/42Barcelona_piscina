/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:32:58 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 09:43:02 by luicasad         ###   ########.fr       */
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
/* ft_strncpy copy at most n char from src into dst.                          */
/*            when src is smaller than n, '\0' right padding happens to dst   */
/*            Otherwise dst is not terminated, Caller solves it               */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;
	unsigned int	src_size;

	if (src != NULL && dest != NULL)
	{
		src_size = ft_strlen(src);
		idx = 0;
		while (idx < src_size && idx < n)
		{
			dest[idx] = src[idx];
			idx++;
		}
		while (idx < n)
			dest[idx++] = '\0';
	}
	return (dest);
}
