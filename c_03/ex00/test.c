/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/20 20:28:40 by luicasad         ###   ########.fr       */
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

	ptxt1 = (char *)malloc((strlen(txt1) +1) * sizeof(char));
	ptxt2 = (char *)malloc((strlen(txt2) +1) * sizeof(char));
	strcpy(ptxt1, txt1);
	strcpy(ptxt2, txt2);
	if (ft_strcmp(ptxt1, ptxt2) == strcmp(ptxt1, ptxt2))
		ft_putstr("Mi función \033[1;92memula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;91mno emula al sistema,\n");
	ft_putstr("\033[0m");
	free(ptxt1);
	free(ptxt2);
}

int	main(void)
{
	prueba("", "Alfonsoca");
	prueba("A", "Alfonsoca");
	prueba("Alfonsoca", "Alfonsoca");
	prueba("DCBA", "" );
	prueba("DCBA", "D" );
	prueba("DCBA", "DCBA" );
	return (0);
}
