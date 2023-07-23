/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:46:59 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/23 23:52:55 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "textsaux.h"
#include "texts.h"

/* ************************************************************************** */
/* process_str  extrats from a string all text chunks separated by any of     */
/*              the char inside charset.                                      */
/*                                                                            */
/* RETURNS a pointer of pointers                                              */
/* ************************************************************************** */
char	**process_str2(char *str, char *charset, char **items)
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
	items[idx_items] = extract(str, init, idx_str -1, &in_w);
	return (items);
}
