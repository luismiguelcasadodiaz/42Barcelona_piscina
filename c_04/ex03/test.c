/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:09:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/26 21:56:26 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	char	*pmistr;
	char	*psustr;
	int		yo;
	int		el;

	pmistr = (char *)malloc((strlen(str) + 1) * sizeof(char));
	psustr = (char *)malloc((strlen(str) + 1) * sizeof(char));
	strcpy(pmistr, str);
	strcpy(psustr, str);
	printf("%s ", pmistr);
	yo = ft_atoi(pmistr);
	el = atoi(psustr);
	printf("%s ", pmistr);
	if (yo == el)
		printf("Mi función \033[1;92msi emula al sistema   ");
	else
		printf("Mi Funcion \033[1;91mno emula al sistema,  ");
	printf("YO >%d< EL >%d< \n", yo, el);
	printf("\033[0m");
	free(pmistr);
	free(psustr);
}

int	main(void)
{
	prueba(" ---+--+1234a-b567");
	prueba(" ---+--+1234-ab567");
	prueba(" ---+--+1234");
	prueba("-2147483648");
	prueba("-2147483647");
	prueba("-2147");
	prueba("-1");
	prueba("0");
	prueba("1");
	prueba("2147483646");
	prueba("2147483647");
}
