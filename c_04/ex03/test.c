/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:09:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/25 17:50:34 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*
  INT_MAX =  2147483647 
  INT_MIN = -2147483648
            12345678901
		   I need an 11 bytes string for representing any INT.
		   plus \0 for finishing the string end ==> 12
*/ 

int	ft_atoi(char *str);

void	prueba(char *str)
{
	if (ft_atoi(str) == atoi(str))
	{
		printf("Mi función \033[1;92msi emula al sistema   ");
		printf("YO >%d< EL >%d< \n", ft_atoi(str), atoi(str));
	}
	else
	{
		printf("Mi Funcion \033[1;91mno emula al sistema,  ");
		printf("YO >%d< EL >%d< \n", ft_atoi(str), atoi(str));
	}
	printf("\033[0m");
}

int	main(void)
{
	prueba(" ---+--+1234ab567");
	prueba("-2147483648");
	prueba("-2147483647");
	prueba("-2147");
	prueba("-1");
	prueba("0");
	prueba("1");
	prueba("2147483646");
	prueba("2147483647");
}
