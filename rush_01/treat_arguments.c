/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:55:49 by giarodri          #+#    #+#             */
/*   Updated: 2023/07/16 23:28:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);
char	**ft_split(char *str, char *charset, int *num_items);

/* *******************************
 * This function treat_arguments(int argc, char **argv)
 *   Checks argument number
 *   Split the first argument
 *   Checks each splitted item has lenght 1
 *   calculate n=sqrt(num items)
 *   Checks no item is bigger N+1
 *
 *
 * RETURNS
 * n if all is ok
 * 0 if error happens
*/
int	right_num_items(int *n)
{
	int	resultado;

	resultado = 0;
	if (*n == 4 || *n == 9 || *n == 16)
		resultado = 1;
	if (*n == 25 || *n == 36 || *n == 49)
		resultado = 1;
	if (*n == 64 || *n == 81)
		resultado = 1;
	return (resultado);
}

int	max_num(int n)
{
	int	result;

	if (n == 4)
		result = 50;
	if (n == 9)
		result = 51;
	if (n == 16)
		result = 52;
	if (n == 25)
		result = 53;
	if (n == 36)
		result = 54;
	if (n == 47)
		result = 55;
	if (n == 64)
		result = 56;
	if (n == 91)
		result = 57;
	return (result);
}

int	all_element_one_char(int *n, char **items)
{
	int	idx;
	int	result;

	result = 1;
	idx = 0;
	while (idx < *n)
	{
		if (items[idx][1] != '\0')
		{
			result = 0;
			break ;
		}
		idx++;
	}
	return (result);
}

int	all_element_less_equal(int *n, char **items)
{
	int	idx;
	int	lim;
	int	result;

	result = 1;
	idx = 0;
	lim = max_num(*n);
	while (idx < *n)
	{
		if ((int)items[idx][0] > lim)
		{
			result = 0;
			break ;
		}
		idx++;
	}
	return (result);
}
/*
char	**treat_arguments(int *num_items)
{
	int		idx;
	char	**items;

	items = NULL;
	items = ft_split("1 2 3 4 4 77 2 1 1 2 3 4 4 3 2 1", " ", num_items);
	if (right_num_items(num_items))
	{
		if (all_element_one_char(num_items, items))
		{
			if (all_element_less_equal(num_items, items))
			{
				idx = 0;
			}
			else
				*num_items = 0;
		}
		else
			*num_items = 0;
	}
	else
		*num_items = 0;
	return (items);
}
*/

char	**treat_arguments(int argc, char **argv, int *num_items)
{
	int		idx;
	char	**items;

	items = NULL;
	if (argc == 2)
	{
		items = ft_split(argv[1], " ", num_items);
		if (right_num_items(num_items))
		{
			if (all_element_one_char(num_items, items))
			{
				if (all_element_less_equal(num_items, items))
				{
					idx = 0;
				}
				else
					*num_items = 0;
			}
			else
				*num_items = 0;
		}
		else
			*num_items = 0;
	}
	return (items);
}
