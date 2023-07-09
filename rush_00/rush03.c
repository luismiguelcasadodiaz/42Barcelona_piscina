/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorente <alorente@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:16:04 by alorente          #+#    #+#             */
/*   Updated: 2023/07/09 12:16:59 by alorente         ###   ########.fr       */
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
			line('A', 'B', 'C', x);
		}
	}
}
