/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/25 13:41:04 by luicasad         ###   ########.fr       */
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
	int				txt1_size;
	int				txt2_size;

	txt1_size = strlen(txt1);
	txt2_size = strlen(txt2);
	pmi_dst = (char *)malloc((txt1_size + txt2_size + 1) * sizeof(char));
	psu_dst = (char *)malloc((txt1_size + txt2_size + 1) * sizeof(char));
	strcpy(pmi_dst, txt1);
	strcpy(psu_dst, txt1);
	mi_int = ft_strlcat(pmi_dst, txt2, nb);
	su_int = strlcat(psu_dst, txt2, nb);
	if (mi_int == su_int)
	{
		if (!(strcmp(pmi_dst, psu_dst)))
			ft_putstr("Mi función \033[1;92msi emula al sistema   ");
		else
			ft_putstr("Mi Funcion \033[1;91mno emula al sistema.  ");
	}
	else
		ft_putstr("Mi Funcion \033[1;91mno emula al sistema,  ");
	ft_putstr("\033[0m");
	printf("t1=%d, t2=%d, buff=%d, size=%d, numchar=%d", txt1_size, txt2_size, txt1_size + txt2_size + 1, nb, nb - txt1_size -1);
	printf(" YO %d >%s<   EL %d >%s<\n", mi_int, pmi_dst, su_int, psu_dst);
	free(pmi_dst);
	free(psu_dst);
}

int	main(void)
{
	prueba("", "", 1);
	prueba("", "0lfonsoca", 1);
	prueba("Alfonsoca", "", 10);
	prueba("Alfonsocasado", "1234", 10);
	prueba("Alfonsoca", "1234", 11);
	prueba("Alfonsoca", "1234", 12);
	prueba("Alfonsoca", "1234", 13);
	prueba("", "2lfonsoca", 1);
	prueba("", "3lfonsoca", 1);
	prueba("A-", "Alfonsoca", 3);
	prueba("A-", "Alfonsoca", 4);
	prueba("A-", "Alfonsoca", 5);
	prueba("A-", "Alfonsoca", 6);
	prueba("A-", "Alfonsoca", 7);
	prueba("EL señor ", "Alfonsoca", 1);
	prueba("Luis ", "Miguel", 1);
	prueba("Luis ", "Miguel", 2);
	prueba("Luis ", "Miguel", 3);
	prueba("Luis ", "Miguel", 4);
	prueba("Luis ", "Miguel", 5);
	prueba("Luis ", "Miguel", 6);
	prueba("DCB0", " 1111", 5);
	prueba("DCB1", " 2222", 6);
	prueba("DCB2", " 3333", 7);
	prueba("DCB3", " 4444", 8);
	prueba("DCB4", " 5555", 9);
	return (0);
}
