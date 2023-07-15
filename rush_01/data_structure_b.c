//looking for the bonus 
#define MAP_SIZE	4

// to avoid Zero Index MAP_SIZE + 1
#define TAB_SIZE	5 

#include <unistd.h>

void	fill_map(int	**mapa)
{
	int	idx_y;
	int idx_x;

	idx_y = 1;
	idx_x = 1;
	while (idx_y <= MAP_SIZE)
	{
		while (idx_x <= MAP_SIZE)
			mapa[idx_y][idx_x++] = 4;
		idx_y++;
	}
}

void	show_row(int *row)
{
	int	idx;
	int	first_col;
	int nl;
	int space;


	nl = 10;
	space = 32;
	first_col = 1;
	idx = 1;
	while (idx < MAP_SIZE)
	{
		if (first_col == 0)
			write(1, &space, 1);
		write(1, &row[idx++], 1);
	}
	write(1, &nl, 1);
}

void	show_map(int	**mapa)
{
	int	idx_y;

	idx_y = 1;
	while (idx_y <= MAP_SIZE)
		show_row(mapa[idx_y++]);
}

	int	map[TAB_SIZE][TAB_SIZE];

int	main(int argc, char **argv)
{
	int	**pmap;

	//fill_map(pmap);
	show_map(pmap);
}
