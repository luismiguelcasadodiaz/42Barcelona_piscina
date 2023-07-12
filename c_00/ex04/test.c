/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:51:50 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 18:55:53 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>

void	ft_is_negative(int n);

int	main(void)
{
	printf("====== char o bien unsigned char i ben signed char========\n");
	printf("CHAR_MIN\t\t%d\t%lubyte \n", SHRT_MIN, sizeof(SHRT_MIN));
	printf("CHAR_MAX\t\t%d\n", SHRT_MAX);
	printf("UCHAR_MAX\t\t%u\n", USHRT_MAX);
	printf("====== short o bien unsigned short========\n");
	printf("SHRT_MIN\t\t%d\n", SHRT_MIN);
	printf("SHRT_MAX\t\t%d\n", SHRT_MAX);
	printf("USHRT_MAX\t\t%u\n", USHRT_MAX);
	printf("====== int o bien unsigned int ========\n");
	printf("INT_MIN\t\t\t%d\n", INT_MIN);
	printf("INT_MAX\t\t\t%d\n", INT_MAX);
	printf("UINT_MAX\t\t\t%u\n", UINT_MAX);
	printf("======  long o bien unsigned long ========\n");
	printf("LONG_MIN\t\t%ld\n", LONG_MIN);
	printf("LONG_MAX\t\t%ld\n", LONG_MAX);
	printf("ULONG_MAX\t\t%lu\n", ULONG_MAX);
	ft_is_negative(-3);
	ft_is_negative(-2);
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(2);
}
