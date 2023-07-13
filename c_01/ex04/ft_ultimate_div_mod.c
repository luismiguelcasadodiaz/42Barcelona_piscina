/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:37:10 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 19:37:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	if (a != NULL && b != NULL)
	{
		if (*b != 0)
		{
			aux = *a / *b;
			*b = *a % *b;
			a = &aux;
		}
		else
		{
			*a = 0;
			*b = 0;
		}
	}
}
