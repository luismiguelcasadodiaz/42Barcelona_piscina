/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_structure_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:27:09 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/15 17:58:28 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//looking for the bonus 
#define MAP_SIZE	25

// to avoid Zero Index MAP_SIZE + 1
#define TAB_SIZE	26 


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

int	fill_map(int map[TAB_SIZE][TAB_SIZE])
{
	int	idx_y;
	int	idx_x;

	idx_y = 1;
	while (idx_y <= MAP_SIZE)
	{
		idx_x = 1;
		while (idx_x <= MAP_SIZE)
			map[idx_y][idx_x++] = 4;
		idx_y++;
	}
	return (map);
}

void	show_row(int row[MAP_SIZE])
{
	int	idx_x;
	int	first_col;

	first_col = 1;
	idx_x = 1;
	while (idx_x <= MAP_SIZE)
	{
		if (first_col == 0)
			ft_space();
		ft_print_digit(row[idx_x++]);
		first_col = 0;
	}
	ft_newline();
}

void	show_map(int map[TAB_SIZE][TAB_SIZE])
{
	int	idx_y;

	idx_y = 1;
	while (idx_y <= MAP_SIZE)
		show_row(map[idx_y++]);
}

int	main()
{
	int map[TAB_SIZE][TAB_SIZE];

	map = fill_map(map);
	show_map(map);
}
