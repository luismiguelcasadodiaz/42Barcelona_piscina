/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:54:16 by giarodri          #+#    #+#             */
/*   Updated: 2023/07/16 22:15:49 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char car, char *charset);
int		count_items(char *str, char *charset, int *num_items);
char	*extract(char *str, int ini, int end, int *in_w);
char	*set_end_item(void);

void	init_var(int *idx_str, int *init_sub, int *idx_items, int *in_word)
{
	*idx_items = 0;
	*in_word = 0;
	*init_sub = 0;
	*idx_str = 0;
}

/*
char	**ft_split(char *str, char *charset)
{
	int		idx_str;
	int		init;
	char	**items;
	int		idx_items;
	int		in_word;

	items = (char **)malloc((1 + count_items(str, charset)) * sizeof (char *));
	init_var(&idx_str, &init, &idx_times, &in_word);
	while (str[idx_str] != '\0')
	{
		if (is_separator(str[idx_str], charset))
		{
			if (in_word)
			{
				items[idx_items++] = extract_item_from(str, init, idx_str -1);
				in_word = 0;
			}
		}
		else
		{
			if (in_word == 0)
				init = idx_str;
			in_word = 1;
		}
		idx_str++;
	}
	items[idx_items++] = extract_item_from(str, init, idx_str-- -1);
	items[idx_items] = set_end_item();
	return (items);
}
*/

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

char	**allocate_mem_to_split(char *str, char *charset, int *num_items)
{
	char	**items;

	count_items(str, charset, num_items);
	items = (char **)malloc((1 + *num_items) * sizeof (char *));
	return (items);
}

char	**ft_split(char *str, char *charset, int *num_items)
{
	char	**items;

	items = allocate_mem_to_split(str, charset, num_items);
	items = process_str(str, charset, items);
	return (items);
}
