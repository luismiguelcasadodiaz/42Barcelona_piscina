/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/21 14:53:05 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

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
	char			*pmi_str;
	char			*psu_str;

	pmi_str = ft_strstr(txt1, txt2);
	psu_str = strstr(txt1, txt2);
	if (pmi_str == NULL && psu_str == NULL)
		ft_putstr("Mi función \033[1;92memula al sistema\n");
	else if (!(strcmp(pmi_str, psu_str)))
		ft_putstr("Mi función \033[1;92memula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;91mno emula al sistema,\n");
	ft_putstr("\033[0m");
	printf(">%s< has >%s<?  YO >%s< EL >%s<\n", txt1, txt2, pmi_str, psu_str);
}

int	main(void)
{
	//prueba(NULL, NULL);
	//prueba("", NULL);
	//prueba(NULL, "");
	prueba("", "Piscina");
	prueba("Piscina", "");
	prueba("Piscina", "P");
	prueba("Piscina", "a");
	prueba("Piscina", "Pi");
	prueba("Piscina", "na");
	prueba("Piscina", "i");
	prueba("Piscina", "is");
	prueba("Piscina", "na");
	prueba("Piscina", "isc");
	prueba("Piscina", "sci");
	prueba("Piscina", "ina");
	prueba("Piscina", "ino");
	prueba("Piscina", "inat");
	return (0);
}
