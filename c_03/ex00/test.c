/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:13:42 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/25 15:19:18 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2);

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

void	prueba(char *txt1, char *txt2)
{
	char			*ptxt1;
	char			*ptxt2;
	int 			r_yo;
	int				r_el;

	ptxt1 = (char *)malloc((strlen(txt1) +1) * sizeof(char));
	ptxt2 = (char *)malloc((strlen(txt2) +1) * sizeof(char));
	strcpy(ptxt1, txt1);
	strcpy(ptxt2, txt2);
	r_yo = ft_strcmp(ptxt1, ptxt2);
	r_el = strcmp(ptxt1, ptxt2);
	if (r_yo == r_el)
		printf("Mi función \033[1;92memula al sistema YO = %d EL = %d \n", r_yo, r_el);
	else
		printf("Mi Funcion \033[1;91mno emula al sistema,YO = %d EL = %d\n", r_yo, r_el);
	ft_putstr("\033[0m");
	free(ptxt1);
	free(ptxt2);
}

int	main(void)
{
	prueba("Hola","Holamundo");
	prueba("", "Alfonsoca");
	prueba("A", "Alfonsoca");
	prueba("Alfonsoca", "Alfonsoca");
	prueba("DCBA", "" );
	prueba("DCBA", "D" );
	prueba("DCBA", "DCBA" );
	return (0);
}
