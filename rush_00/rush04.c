/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisoliz <nisoliz@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:00:41 by nisoliz           #+#    #+#             */
/*   Updated: 2023/07/09 19:56:09 by alorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(char intro, char medio, char final, int x)
{
	ft_putchar(intro);
	while (x > 2)
	{
		ft_putchar(medio);
		x--;
	}
	if (x == 2)
	{
		ft_putchar(final);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	idx_y;

	idx_y = 1;
	if (x > 0 && y > 0)
	{
		line('A', 'B', 'C', x);
		while (idx_y <= y - 2)
		{
			line('B', ' ', 'B', x);
			idx_y++;
		}
		if (y > 1)
		{
			line('C', 'B', 'A', x);
		}
	}
}
