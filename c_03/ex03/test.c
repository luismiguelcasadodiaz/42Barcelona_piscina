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

char	*ft_strncat(char *dest, char *src, unsigned int nb);

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

void	prueba(char *txt1, char *txt2, unsigned int nb)
{
	char			*pmi_cat;
	char			*psu_cat;
	char			*pmi_dst;
	char			*psu_dst;

	pmi_dst = (char *)malloc((strlen(txt1) + strlen(txt2) + 1) * sizeof(char));
	psu_dst = (char *)malloc((strlen(txt1) + strlen(txt2) + 1) * sizeof(char));
	strcpy(pmi_dst, txt1);
	strcpy(psu_dst, txt1);
	pmi_cat = ft_strncat(pmi_dst, txt2, nb);
	psu_cat = strncat(psu_dst, txt2, nb);
	if (!(strcmp(pmi_cat, psu_cat)))
		ft_putstr("Mi función \033[1;92memula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;91mno emula al sistema,\n");
	ft_putstr("\033[0m");
	printf(" YO >%s<\n EL >%s<\n", pmi_cat, psu_cat);
	free(pmi_dst);
	free(psu_dst);
}

int	main(void)
{
	prueba("", "0lfonsoca", 0);
	prueba("", "1lfonsoca", 1);
	prueba("", "2lfonsoca", 2);
	prueba("", "3lfonsoca", 3);
	prueba("A-", "Alfonsoca", 1);
	prueba("A--", "Alfonsoca", 1);
	prueba("EL señor ", "Alfonsoca", 1);
	prueba("Alfonsoca", "Alfonsoca", 1);
	prueba("DCB0", "", 0);
	prueba("DCB1", "", 1);
	prueba("DCB2", "", 2);
	prueba("DCB3", "", 3);
	prueba("DCB4", "", 4);
	prueba("DCBA", " D", 1);
	prueba("DCBA", "-D", 2);
	prueba("DCBA", "D", 3);
	prueba("DCBA", "DCBA", 1);
	return (0);
}
