/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:55:49 by giarodri          #+#    #+#             */
/*   Updated: 2023/07/16 23:38:57 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset, int *num_items);
void	ft_putstr(char *str);
char	**treat_arguments(int argc, char **argv, int *num_items);
int		**create_map(int dim);
void	fill_map(int dim, int **map);
void	show_map(int dim, int **map);

int	main(int argc, char **argv)
{
	int		*pdim;
	int		dim;
	char	**items;
	int		**map;

	dim = 0;
	pdim = &dim;
	items = treat_arguments(argc, argv, pdim);
	if (dim > 0)
	{
		map = create_map(dim);
		fill_map(dim, map);
		show_map(dim, map);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
