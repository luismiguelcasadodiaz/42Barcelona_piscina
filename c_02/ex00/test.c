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

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

void	prueba(char	*dst, char*src, int size_dst, int size_src)
{
	char	mydst[size_dst];
	char	mysrc[size_src];
	char	sydst[size_dst];
	char	sysrc[size_src];
	char	*pmydst;
	char	*pmysrc;
	char	*psydst;
	char	*psysrc;

	pmydst = &mydst[0];
	pmysrc = &mysrc[0];
	psydst = &sydst[0];
	psysrc = &sysrc[0];
	strcpy(pmysrc, src);
	strcpy(psysrc, src);
	printf("======= Punto de partida ======\n");
	printf("SRC >%s<\n", src);
	printf("DST >%s<\n", dst);
	printf("======= Resultado  LMCD  ======\n");
	printf("ANTE SRC >%s<\n", pmysrc);
	printf("ANTE DST >%s<\n", pmydst);
	ft_strcpy(pmydst, src);
	printf("POST SRC >%s<\n", pmysrc);
	printf("POST DST >%s<\n", pmydst);
	printf("======= Resultado SYSTEM ======\n");
	printf("ANTE SRC >%s<\n", psysrc);
	printf("ANTE DST >%s<\n", psydst);
	strcpy(psydst, src);
	printf("POST SRC >%s<\n", psysrc);
	printf("POST DST >%s<\n", psydst);
}

int	main(void)
{
	char	*ps;
	char	*pd;
	char	s10[10];
	char	d10[10];
	char	s01[1];
	char	s00[10];
	char	d01[1];

	ps = &s10[0];
	pd = &d10[0];
	strcpy(ps, "Alfonsoca");
	prueba(pd, ps, 10, 10);
	
	ps = &s10[0];
	pd = &d01[0];
	strcpy(ps, "Luis Miguel");
	prueba(pd, ps, 1, 10);
	
	ps = &s00[0];
	pd = &d10[0];
	strcpy(ps, "");
	prueba(pd, ps, 10, 0);
	
	ps = &s01[0];
	pd = &d10[0];
	strcpy(ps, "X");
	prueba(pd, ps, 10, 1);
	
	
	return (0);
}
