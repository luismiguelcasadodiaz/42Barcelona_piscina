/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:51:50 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/06 12:02:50 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_is_negative.c"
#include <limits.h>

int	main(void)
{
	printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
	ft_is_negative(-3);
	ft_is_negative(-2);
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(2);
}
