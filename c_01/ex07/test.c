/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:09:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/11 18:13:30 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tabla[12];
	int	*ptabla;
	int	idx;

	tabla[0] = 1;
	tabla[1] = 2;
	tabla[2] = 3;
	tabla[3] = 4;
	tabla[4] = 5;
	tabla[5] = 6;
	tabla[6] = 7;
	tabla[7] = 8;
	tabla[8] = 9;
	tabla[9] = 11;
	tabla[10] = 12;
	tabla[11] = 13;
	ptabla = &tabla[0];
	idx = 0;
	while (idx < 12)
		printf("%d\t", tabla[idx++]);
	ft_rev_int_tab(ptabla, 12);
	idx = 0;
	while (idx < 12)
		printf("%d\t", tabla[idx++]);
}
