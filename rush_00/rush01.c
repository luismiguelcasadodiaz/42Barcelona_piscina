/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:44:04 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/08 02:11:29 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void	rush(int x, int y)
{
	int	idx_x;
	int	idx_y;
	
	idx_x = 1;
	idx_y = 1;
	while ( idx_y <= y)
	{
		while (idx_x <= x)
		{
			ft_putchar('A');
			idx_x++;
		}
		idx_x=1;
		ft_putchar('\n');
		idx_y++;
	}	
}
