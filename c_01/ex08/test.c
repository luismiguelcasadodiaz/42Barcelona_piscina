/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 21:00:59 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tabla[12];
	int	*ptabla;
	int	idx;

	tabla[0] = 66;
	tabla[1] = 55;
	tabla[2] = 44;
	tabla[3] = 33;
	tabla[4] = 22;
	tabla[5] = 1212;
	tabla[6] = 88;
	tabla[7] = 99;
	tabla[8] = 1010;
	tabla[9] = 11;
	tabla[10] = 1111;
	tabla[11] = 77;
	ptabla = &tabla[0];
	idx = 0;
	while (idx < 12)
		printf("%d\t", tabla[idx++]);
	printf("\n");
	idx = *(&tabla + 1) - tabla;
	ft_sort_int_tab(ptabla, 7);
	idx = 0;
	while (idx < 12)
		printf("%d\t", tabla[idx++]);
	printf("\n");
	ft_sort_int_tab(ptabla, idx);
	idx = 0;
	while (idx < 12)
		printf("%d\t", tabla[idx++]);
	printf("\n");
	ft_sort_int_tab(ptabla, 0);
	ft_sort_int_tab(NULL, idx);
	ft_sort_int_tab(NULL, 0);
}
