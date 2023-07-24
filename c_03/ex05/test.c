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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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
	unsigned int	mi_int;
	unsigned int	su_int;
	char			*pmi_dst;
	char			*psu_dst;

	pmi_dst = (char *)malloc((strlen(txt1) + strlen(txt2) + 1) * sizeof(char));
	psu_dst = (char *)malloc((strlen(txt1) + strlen(txt2) + 1) * sizeof(char));
	strcpy(pmi_dst, txt1);
	strcpy(psu_dst, txt1);
	mi_int = ft_strlcat(pmi_dst, txt2, nb);
	su_int = strlcat(psu_dst, txt2, nb);
	if (!(strcmp(pmi_dst, psu_dst) && mi_int == su_int))
		ft_putstr("Mi función \033[1;92memula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;91mno emula al sistema,\n");
	ft_putstr("\033[0m");
	printf(" YO %d >%s<\n EL %d >%s<\n", mi_int, pmi_dst, su_int, psu_dst);
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
