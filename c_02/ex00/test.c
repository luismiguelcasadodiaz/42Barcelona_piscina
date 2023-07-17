/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/13 18:32:25 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

void	prueba(char	*dst, char*src)
{
	char	mydst;
	char	mysrc;
	char	sydst;
	char	sysrc;
	char	*pmydst;
	char	*pmysrc;
	char	*psydst;
	char	*psysrc;

	pmydst = &mydst;
	pmysrc = &mysrc;
	psydst = &sydst;
	psysrc = &sysrc;
	*pmydst = *dst;
	*pmysrc = *src;
	*psydst = *dst;
	*psysrc = *src;
	printf("======= Punto de partida ======\n");
	printf("SRC = %s\n", src);
	printf("DST = %s\n", dst);
	printf("======= Resultado  LMCD  ======\n");
	printf("ANTE SRC = %s\n", src);
	printf("ANTE DST = %s\n", dst);
	ft_strcpy(pmydst, src);
	printf("POST SRC = %s\n", src);
	printf("POST DST = %s\n", dst);
	printf("======= Resultado SYSTEM ======\n");
	printf("ANTE SRC = %s\n", src);
	printf("ANTE DST = %s\n", pmydst);
	strcpy(psydst, src);
	printf("POST SRC = %s\n", src);
	printf("POST DST = %s\n", psydst);
}

int	main(void)
{
	char	*ps;
	char	*pd;
	char	s10[10] = "Alfonsoca";
	char	s01[1] = "L";
	char	s00[10];
	char	d10[10];
	char	d01[1];

	ps = &s10[0];
	pd = &d10[0];
	prueba(pd, ps);
	ps = &s10[0];
	pd = &d01[0];
	prueba(pd, ps);
	ps = &s00[0];
	pd = &d10[0];
	prueba(pd, ps);
	ps = &s01[0];
	pd = &d10[0];
	prueba(pd, ps);
}
