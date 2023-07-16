/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_structure_d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:52:11 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/16 00:41:50 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_structure_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasa:d <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:27:09 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/15 19:52:06 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_newline(void)
{
	int	nl;

	nl = 10;
	write(1, &nl, 1);
}

void	ft_space(void)
{
	int	space;

	space = 32;
	write(1, &space, 1);
}

void	ft_print_digit(int *digit)
{
	int	ascii_digit;

	printf("%d ", *digit);
	ascii_digit = 48 + *digit;
	write(1, &ascii_digit, 1);
}

void	fill_map(int **map, int dim)
{
	int	idx_y;
	int	idx_x;

	idx_y = 1;
	while (idx_y <= dim)
	{
		idx_x = 1;
		while (idx_x <= dim)
			map[idx_y][idx_x++] = 4;
		idx_y++;
	}
}


/*void	show_row(int *row, int dim)
{
	int	idx_x;
	int	first_col;

	first_col = 1;
	idx_x = 1;
	while (idx_x <= dim)
	{
		if (first_col == 0)
			ft_space();
		ft_print_digit(row[idx_x++]);
		first_col = 0;
	}
	ft_newline();
}
*/
void	show_map(int **map, int dim)
{
	int	idx_y;
	int	idx_x;
	int	first_col;

	first_col = 1;
	idx_y = 1;
	while (idx_y <= dim)
	{
		idx_x = 1;
		while (idx_x <= dim)
		{
			if (first_col == 0)
				ft_space();
			ft_print_digit(&map[idx_y][idx_x++]);
			first_col = 0;
		}
		idx_y++;
	}
}

void	init_map(int **map, int dim)
{
	int idx_x;
	int idx_y;
	
	map = malloc((dim + 1) * sizeof(*map));

	idx_y = 0;
	while (idx_y <= dim)
	{
		map[idx_y] =  malloc((dim + 1) * sizeof(int));
		idx_x = 0;
		while (idx_x <= dim)
			map[idx_y][idx_x++] = 0;
		idx_y++;
	}

}

void	free_map(int **map, int dim)
{
	int idx_y;

	idx_y = 0;
	while (idx_y <= dim)
	{
		free(map[idx_y++]);
	}
	free(map);
}
int**	create_map(int dim)
{
	int ** rows;
	int *values;
	void *p;

	p = malloc(dim * dim * sizeof(int));
	values = (int *)p;
	p = malloc (dim * sizeof(int *));
	return rows;
}	

int	main()
{
	void **space;
	int **map;
	int dim;

	map = NULL;
	dim = 4;
	map = create_map(dim);
	//free_map(map, dim);
	//init_map(map, dim);
	//fill_map(map, dim);
	show_map(map, dim);
	//free_map(map, dim);
}
