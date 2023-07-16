/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_structure_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:27:09 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/16 01:08:35 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

//looking for the bonus
#define MAP_SIZE    4

//I sorround data with conditions MAP_SIZE + 2
#define TAB_SIZE    6
/*
    0 0 0 0 0 0
    0 1 2 3 4 0
    0 2 1 4 3 0
	0 3 4 1 2 0
	0 4 3 2 1 0
	0 0 0 0 0 0
*/

void	show_map(int dim, int **map);
void	ft_putstr(char *str);

void	fill_map(int dim, int **map)
{
	int	idx_y;
	int	idx_x;

	idx_y = 0;
	while (idx_y < dim)
	{
		idx_x = 0;
		while (idx_x < dim)
			map[idx_y][idx_x++] = 4;
		idx_y++;
	}
}

int	**create_map(int dim)
{
	int	idx_y;
	int	**map;

	map = (int **)malloc(dim * sizeof(int *));
	if (map == NULL)
	{
		ft_putstr("Error:Dynamic memory allocation\n");
		exit (1);
	}
	idx_y = 0;
	while (idx_y < dim)
	{
		map[idx_y] = (int *)malloc(dim * sizeof(int));
		if (map[idx_y] == NULL)
		{
			ft_putstr("Error:Dynamic memory allocation\n");
			exit (1);
		}
		idx_y++;
	}
	return (map);
}

int	main(void)
{
	int	**map;
	int	dim;

	dim = 6;
	map = create_map(dim);
	fill_map(dim, map);
	show_map(dim, map);
}
