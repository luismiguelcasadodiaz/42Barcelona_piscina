/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:15:32 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 20:38:15 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx_out;
	int	idx_in;

	idx_out = 0;
	while (idx_out < size)
	{
		idx_in = 0;
		while (idx_in < size - idx_out -1)
		{
			if (tab[idx_in] > tab[idx_in + 1])
				ft_swap(&tab[idx_in], &tab[idx_in +1]);
			idx_in++;
		}
		idx_out++;
	}
}
