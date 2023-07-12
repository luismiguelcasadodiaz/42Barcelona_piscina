/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:39:06 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 19:43:45 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	half;
	int	idx_left;
	int	idx_right;

	half = size / 2;
	idx_left = 0;
	idx_right = size -1;
	while (half > 0)
	{
		ft_swap(&tab[idx_right--], &tab[idx_left++]);
		half--;
	}
}
