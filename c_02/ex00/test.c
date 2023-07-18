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

char	*ft_strcpy(char *dest, char *src);

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

/* dst is                nine plus end*/
/* src is "Alfonsoca\0"  nine plus end*/
void	prueba_10_10()
{
	const int	nd = 10;
	const int	ns = 10;
	char		*pd;
	char		*ps;
	char		d[nd];
	char		s[ns];
	char		*pmid;
	char		*pmis;
	char		mid[nd];
	char		mis[ns];

	pd = &d[0];
	ps = &s[0];
	strcpy(ps, "Alfonsoca");
	pmid = &mid[0];
	pmis = &mis[0];
	strcpy(pmis, "Alfonsoca");
	if (strcmp(strcpy(pd, ps), ft_strcpy(pmid, pmis)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
}

/* dst is                nine plus end*/
/* src is "A\0"           one plus end*/
void	prueba_10_02()
{
	const int	nd = 10;
	const int	ns = 2;
	char		*pd;
	char		*ps;
	char		d[nd];
	char		s[ns];
	char		*pmid;
	char		*pmis;
	char		mid[nd];
	char		mis[ns];

	pd = &d[0];
	ps = &s[0];
	strcpy(ps, "A");
	pmid = &mid[0];
	pmis = &mis[0];
	strcpy(pmis, "A");
	if (strcmp(strcpy(pd, ps), ft_strcpy(pmid, pmis)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
}

/* dst is                 one plus end*/
/* src is "A\0"          nine plus end*/
void	prueba_02_10()
{
	const int	nd = 2;
	const int	ns = 10;
	char		*pd;
	char		*ps;
	char		d[nd];
	char		s[ns];
	char		*pmid;
	char		*pmis;
	char		mid[nd];
	char		mis[ns];

	pd = &d[0];
	ps = &s[0];
	strcpy(ps, "Alfonsoca");
	pmid = &mid[0];
	pmis = &mis[0];
	strcpy(pmis, "Alfonsoca");
	if (strcmp(strcpy(pd, ps), ft_strcpy(pmid, pmis)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
}
/* dst is                nine plus end*/
/* src is "\0"                only end*/
void	prueba_10_01()
{
	const int	nd = 10;
	const int	ns = 1;
	char		*pd;
	char		*ps;
	char		d[nd];
	char		s[ns];
	char		*pmid;
	char		*pmis;
	char		mid[nd];
	char		mis[ns];

	pd = &d[0];
	ps = &s[0];
	strcpy(ps, "");
	pmid = &mid[0];
	pmis = &mis[0];
	strcpy(pmis, "");
	if (strcmp(strcpy(pd, ps), ft_strcpy(pmid, pmis)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
}

/* dst is                 one plus end*/
/* src is "Alfonsoca\0"  nine plus end*/
void	prueba_01_10()
{
	const int	nd = 1;
	const int	ns = 10;
	char		*pd;
	char		*ps;
	char		d[nd];
	char		s[ns];
	char		*pmid;
	char		*pmis;
	char		mid[nd];
	char		mis[ns];

	pd = &d[0];
	ps = &s[0];
	strcpy(ps, "");
	pmid = &mid[0];
	pmis = &mis[0];
	strcpy(pmis, "");
	if (strcmp(strcpy(pd, ps), ft_strcpy(pmid, pmis)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
}

/* dst is                nine plus end*/
/* src is                         NULL*/
void	prueba_10_NU()
{
	const int	nd = 10;
	const int	ns = 10;
	char		*pd;
	char		*ps;
	char		d[nd];
	char		s[ns];
	char		*pmid;
	char		*pmis;
	char		mid[nd];
	char		mis[ns];

	pd = &d[0];
	ps = &s[0];
	//strcpy(ps, "");
	pmid = &mid[0];
	pmis = &mis[0];
	//strcpy(pmis, "");
	ps = NULL;
	pmis = NULL;
	ft_strcpy(pd, ps);  // <-Change to see Segmentation Fault
	if (strcmp(strcpy(pd, ps), ft_strcpy(pmid, pmis)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
}

/* dst is                         NULL*/
/* src is "Alfonsoca\0"  nine plus end*/
void	prueba_NU_10()
{
	const int	nd = 1;
	const int	ns = 10;
	char		*pd;
	char		*ps;
	char		d[nd];
	char		s[ns];
	char		*pmid;
	char		*pmis;
	char		mid[nd];
	char		mis[ns];

	pd = &d[0];
	ps = &s[0];
	strcpy(ps, "Alfonsoca");
	pmid = &mid[0];
	pmis = &mis[0];
	strcpy(pmis, "Alfonsoca");
	pd = NULL;
	pmid = NULL;
	ft_strcpy(pd, ps);// <-Change to see Segmentation Fault
	if (strcmp(strcpy(pd, ps), ft_strcpy(pmid, pmis)))
		ft_putstr("Mi función \033[1;91mno emula al sistema\n");
	else
		ft_putstr("Mi Funcion \033[1;92memula al sistema,\n");
	ft_putstr("\033[0m");
}
int	main(void)
{

	prueba_10_10();
	prueba_10_02();
	prueba_02_10();
	prueba_10_01();
	prueba_01_10();
	//prueba_10_NU();
//	prueba_NU_10();
	//prueba_NU_NU();
	return (0);
}
