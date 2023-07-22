/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:46:59 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 21:22:18 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "textsaux.h"

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

/* ************************************************************************** */
/* process_str  extrats from a string all text chunks separated by any of     */
/*              the char inside charset.                                      */
/*                                                                            */
/* RETURNS a pointer of pointers                                              */
/* ************************************************************************** */
void	init_var(int *idx_str, int *init_sub, int *idx_items, int *in_word)
{
	*idx_items = 0;
	*in_word = 0;
	*init_sub = 0;
	*idx_str = 0;
}

char	**process_str(char *str, char *charset, char **items)
{
	int		idx_str;
	int		init;
	int		idx_items;
	int		in_w;

	init_var(&idx_str, &init, &idx_items, &in_w);
	while (str[idx_str] != '\0')
	{
		if (is_separator(str[idx_str], charset))
		{
			if (in_w)
				items[idx_items++] = extract(str, init, idx_str -1, &in_w);
		}
		else
		{
			if (in_w == 0)
				init = idx_str;
			in_w = 1;
		}
		idx_str++;
	}
	items[idx_items++] = extract(str, init, idx_str-- -1, &in_w);
	items[idx_items] = set_end_item();
	return (items);
}
