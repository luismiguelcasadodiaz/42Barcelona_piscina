/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/17 20:20:08 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

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

/* dst is                nd-1 plus end*/
/* src is txt            ns-1 plus end*/
/* nc in char number to copy          */
/*void	prueba(int nd, int ns, char *txt, unsigned int nc)
{
	char		*pd;
	char		*ps;
	char		d[nd];
	char		s[ns];
	char		*pmid;
	char		*pmis;
	char		mid[nd];
	char		mis[ns];
	char		*pmir;
	char		*pr;

	pd = &d[0];
	ps = &s[0];
	strcpy(ps, txt);
	pmid = &mid[0];
	pmis = &mis[0];
	strcpy(pmis, txt);
	pmir = ft_strncpy(pmid, pmis, nc);
	pr = strncpy(pd, ps, nc);
	printf(">%s<\n",pr);
	printf(">%s<\n",pmir);
	if (strcmp(strncpy(pd, ps, nc), ft_strncpy(pmid, pmis, nc)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
}
*/

void	prueba(char *txt, unsigned int nc)
{
	char		*pd;
	char		*ps;
	char		*pmid;
	char		*pmis;
	char		*pmir;
	char		*prr;
	int			ns;

	ns = strlen(txt);
	pd = (char *)malloc((nc +1) * sizeof(char));
	ps = (char *)malloc((ns +1) * sizeof(char));
	strcpy(ps, txt);
	pmid = (char *)malloc((nc +1) * sizeof(char));
	pmis = (char *)malloc((ns +1) * sizeof(char));
	strcpy(pmis, txt);
	pmir = (char *)malloc((nc +1) * sizeof(char));
	pmir = ft_strncpy(pmid, pmis, nc);
	prr = (char *)malloc((nc +1) * sizeof(char));
	prr = strncpy(pd, ps, nc);
	printf(">%s<\n",prr);
	printf(">%s<\n",pmir);
	if (strcmp(strncpy(pd, ps, nc), ft_strncpy(pmid, pmis, nc)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
	//free(pd);
	//free(ps);
	//free(pmid);
	//free(pmis);
	//free(pmir);
	//free(prr);
}

int	main(void)
{
	prueba("Alfonsoca", 1);
	prueba("Alfonsoca", 10);
	prueba("Alfonsoca", 13);
	prueba("DCBA", 1);
	prueba("DCBA", 5);
	prueba("DCBA", 7);
	//prueba_10_NU();
//	prueba_NU_10();
	//prueba_NU_NU();
	return (0);
}
