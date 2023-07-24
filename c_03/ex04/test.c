/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 18:04:26 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

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

void	prueba(char *txt, unsigned int nc)
{
	char			*pd;
	char			*ps;
	char			*pmid;
	char			*pmis;
	unsigned int	mir;
	unsigned int	r;
	int				ns;

	ns = strlen(txt);
	pd = (char *)malloc((nc +1) * sizeof(char));
	ps = (char *)malloc((ns +1) * sizeof(char));
	strcpy(ps, txt);
	pmid = (char *)malloc((nc +1) * sizeof(char));
	pmis = (char *)malloc((ns +1) * sizeof(char));
	strcpy(pmis, txt);
	mir = ft_strlcpy(pmid, pmis, nc);
	r = strlcpy(pd, ps, nc);
	printf("el %d >%s<\n", r, pd);
	printf("yo %d >%s<\n", mir, pmid);
	if (mir == r && !strcmp(pmid, pd))
		ft_putstr("Mi función \033[1;92memula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;91mno emula al sistema,\n");
	ft_putstr("\033[0m");
	free(pd);
	free(ps);
	free(pmid);
	free(pmis);
}

int	main(void)
{
	prueba("Alfonsoca", 1);
	prueba("Alfonsoca", 10);
	prueba("Alfonsoca", 13);
	prueba("DCBA", 1);
	prueba("DCBA", 5);
	prueba("DCBA", 7);
	return (0);
}
