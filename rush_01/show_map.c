/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giarodri <giarodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:56:34 by giarodri          #+#    #+#             */
/*   Updated: 2023/07/16 19:56:37 by giarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#ifndef SHOW_MAP_H

# define SHOW_MAP_H
# define MAP_SIZE    4
# define TAB_SIZE    6

#endif

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

void	ft_print_digit(int digit)
{
	int	ascii_digit;

	ascii_digit = 48 + digit;
	write(1, &ascii_digit, 1);
}

void	show_map(int dim, int **map)
{
	int	idx_y;
	int	idx_x;
	int	first_col;

	first_col = 1;
	idx_x = 1;
	idx_y = 1;
	while (idx_y < dim)
	{
		idx_x = 1;
		while (idx_x < dim)
		{
			if (first_col == 0)
				ft_space();
			ft_print_digit(map[idx_y][idx_x++]);
			first_col = 0;
		}
		ft_newline();
		idx_y++;
		first_col = 1;
	}
}
