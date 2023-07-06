/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:09:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/06 20:26:48 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.c"
#include <unistd.h>
/*
  INT_MAX =  2147483647 
  INT_MIN = -2147483648
            12345678901
		   I need an 11 bytes string for representing any INT.
		   plus \0 for finishing the string end ==> 12
*/ 
int	main(void)
{
	/*char* num_text = malloc(12);
	int		nb;

	nb = 34567;
	num_text = (char) nb;

	write(1, &num_text, 6); */
	ft_putnbr(1234);
}
