/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 09:08:25 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

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

char	*ft_strupcase(char *str);

int	main(void)
{
	char	t1[] = "Hola caracola";
	char	*p1;
	char	t2[] = "\n";
	char	t3[] = "zxcvbnm,./ABCD\n";
	char	t4[] = "=Hola 12caracola";
	char	t5[] = "Hola caracola";

	p1 = (char *)malloc(5 * sizeof(char));
	strcpy(p1, "abcd");
	ft_putstr((ft_strupcase(p1)));
	free(p1);
	ft_putstr((ft_strupcase(t1)));
	ft_putstr((ft_strupcase(t2)));
	ft_putstr((ft_strupcase(t3)));
	ft_putstr((ft_strupcase(t4)));
	ft_putstr((ft_strupcase(t5)));
}
