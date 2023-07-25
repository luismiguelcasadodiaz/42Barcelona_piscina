/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:43:29 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/25 13:43:37 by luicasad         ###   ########.fr       */
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
/* ft_strlcat appends string src to the end of dest.                          */
/*            It will append at most size - strlen(dest) - 1 characters.      */
/*            It will then NUL-terminate, unless size is 0 or the original    */
/*            dest string was longer than size.                               */
/*               (in practice this should not happen as it means that either  */
/*                 * size is incorrect                                        */
/*                 * dst is not a proper string)                              */
/*                                                                            */
/* RETURNS    the initial length of dst plus the length of src                */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	int				append_chars;
	int				idx_src;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	append_chars = size - dest_size - 1; 
	if (append_chars >= 0)
	{
		idx_src = 0;
		while (append_chars > 0 && src[idx_src] != '\0')
		{
			dest[dest_size + idx_src] = src[idx_src];
			append_chars--;
			idx_src++;
		}
		dest[dest_size + idx_src] = '\0';
		return (dest_size + src_size);
	}
	return (size + src_size);
}
