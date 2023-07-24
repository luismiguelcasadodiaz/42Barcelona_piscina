/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 13:45:59 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_hex_of(int num, int theme);
char	*ft_putstr_non_printable(char *str);


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

void	prueba(char *txt)
{
	printf("printf<%s>\n",txt);
	ft_putstr("      <");
	ft_putstr(txt);
	ft_putstr(">==<");
	ft_putstr_non_printable(txt);
	ft_putstr(">\n");
}


int	main(void)
{
//	ft_hex_of(0, 0);
//	ft_putstr(">\n");
//	ft_hex_of(0, 1);
//	ft_putstr(">\n");
//	ft_hex_of(0, 2);
//	ft_putstr(">\n");
	prueba("C00cou\x00tu vas bien ?");
	prueba("C01cou\x01tu vas bien ?");
	prueba("C02cou\x02tu vas bien ?");
	prueba("C03cou\x03tu vas bien ?");
	prueba("C04cou\x04tu vas bien ?");
	prueba("C05cou\x05tu vas bien ?");
	prueba("C06cou\x06tu vas bien ?");
	prueba("C07cou\x07tu vas bien ?");
	prueba("C08cou\x08tu vas bien ?");
	prueba("C09cou\x09tu vas bien ?");
	prueba("C10cou\x0Atu vas bien ?");
	prueba("C11cou\x0Btu vas bien ?");
	prueba("C12cou\x0Ctu vas bien ?");
	prueba("C13cou\x0Dtu vas bien ?");
	prueba("C14cou\x0Etu vas bien ?");
	prueba("C15cou\x0Ftu vas bien ?");
	prueba("C16cou\x10tu vas bien ?");
	prueba("C17cou\x11tu vas bien ?");
	prueba("C18cou\x12tu vas bien ?");
	prueba("C19cou\x13tu vas bien ?");
	prueba("C20cou\x14tu vas bien ?");
	prueba("C21cou\x15tu vas bien ?");
	prueba("C22cou\x16tu vas bien ?");
	prueba("C23cou\x17tu vas bien ?");
	prueba("C24cou\x18tu vas bien ?");
	prueba("C25cou\x19tu vas bien ?");
	prueba("C25cou\x1Atu vas bien ?");
	prueba("C27cou\x1Btu vas bien ?");
	prueba("C28cou\x1Ctu vas bien ?");
	prueba("C29cou\x1Dtu vas bien ?");
	prueba("C30cou\x1Etu vas bien ?");
	prueba("C31cou\x1Ftu vas bien ?");
	prueba("C127ou\x7Ftu vas bien ?");
}
