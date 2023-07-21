/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/21 12:50:52 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, int n);

void	ft_putstr(char *str)
{
	int	idx;

	if (str != NULL)
	{
		idx = 0;
		while (str[idx] != '\0')
			write(1, &str[idx++], 1);
	}
}

void	prueba(char *txt1, char *txt2, int n)
{
	char			*ptxt1;
	char			*ptxt2;
	int				mi_n;
	int 			su_n;

	ptxt1 = (char *)malloc((strlen(txt1) +1) * sizeof(char));
	ptxt2 = (char *)malloc((strlen(txt2) +1) * sizeof(char));
	strcpy(ptxt1, txt1);
	strcpy(ptxt2, txt2);
	mi_n = ft_strncmp(ptxt1, ptxt2, n);
	su_n = strncmp(ptxt1, ptxt2, n);
	printf(" mi %d su %d\n", mi_n, su_n);
	if (mi_n == su_n)
		ft_putstr("Mi función \033[1;92memula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;91mno emula al sistema,\n");
	ft_putstr("\033[0m");
	free(ptxt1);
	free(ptxt2);
}

int	main(void)
{
	//prueba("", "Alfonsoca", 1);
	//prueba("", "Alfonsoca", 2);
	//prueba("", "Alfonsoca", 3);
	//prueba("A", "Alfonsoca", 1);
	//prueba("B", "Alfonsoca", 1);
	prueba("A", "Alfonsoca", 2);
	prueba("A", "Alfonsoca", 3);
	prueba("Alfonsoca", "Alfonsoca", 1);
	prueba("Alfonsoca", "Alfonsoca", 2);
	prueba("Alfonsoca", "Alfonsoca", 3);
	prueba("DCBA", "" , 1);
	prueba("DCBA", "" , 2);
	prueba("DCBA", "" , 3);
	prueba("DCBA", "D" , 1);
	prueba("DCBA", "D" , 2);
	prueba("DCBA", "D" , 3);
	prueba("DCBA", "DCBA" , 1);
	prueba("DCBA", "DCBA" , 2);
	prueba("DCBA", "DCBA" , 3);
	return (0);
}
