/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:36:46 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 19:36:51 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (div != NULL && mod != NULL)
	{
		if (b != 0)
		{
			*div = a / b;
			*mod = a % b;
		}
		else
		{
			*div = 0;
			*mod = 0;
		}
	}
}
