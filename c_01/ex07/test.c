/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:38:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 20:12:40 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tabla[12];
	int	*ptabla;
	int	idx;

	tabla[0] = 11;
	tabla[1] = 22;
	tabla[2] = 33;
	tabla[3] = 44;
	tabla[4] = 55;
	tabla[5] = 66;
	tabla[6] = 77;
	tabla[7] = 88;
	tabla[8] = 99;
	tabla[9] = 1010;
	tabla[10] = 1111;
	tabla[11] = 1212;
	ptabla = &tabla[0];
	idx = 0;
	while (idx < 12)
		printf("%d\t", tabla[idx++]);
	printf("\n");
	ft_rev_int_tab(ptabla, 12);
	idx = 0;
	while (idx < 12)
		printf("%d\t", tabla[idx++]);
	printf("\n");
}
