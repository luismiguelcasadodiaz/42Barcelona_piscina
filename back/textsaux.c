/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textsaux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:51:37 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 21:55:35 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	idx;

	if (str != NULL)
	{
		idx = 0;
		while (str[idx] != '\0')
			write(1, &str[idx++], 1);
	}
}

int	is_separator(char car, char *charset)
{
	int	idx_set;
	int	found;

	found = 0;
	idx_set = 0;
	while (charset[idx_set] != '\0')
	{
		if (car == charset[idx_set++])
		{
			found = 1;
			break ;
		}
	}
	return (found);
}

char	*set_end_item(void)
{
	char	*item;

	item = (char *)malloc(1 * sizeof(char));
	item[0] = '\0';
	return (item);
}

char	*extract(char *str, int ini, int end, int *in_w)
{
	char	*item;	
	int		idx_item;

	item = (char *)malloc((end - ini + 1 + 1) * sizeof(char));
	if (item == NULL)
	{
		ft_putstr("Error:Dynamic memory allocation\n");
		exit (1);
	}
	idx_item = 0;
	while (ini <= end)
	{
		item[idx_item++] = str[ini++];
	}
	item[idx_item] = '\0';
	*in_w = 0;
	return (item);
}

void	count_items(char *str, char *charset, int *num_items)
{
	int	inside_word;
	int	idx_str;
	int	counter;

	inside_word = 0;
	idx_str = 0;
	counter = 0;
	while (str[idx_str] != '\0')
	{
		if (is_separator(str[idx_str], charset))
		{
			if (inside_word)
			{
				inside_word = 0;
				counter++;
			}
		}
		else
		{
			inside_word = 1;
		}
		idx_str++;
	}
	counter++;
	*num_items = counter;
}
