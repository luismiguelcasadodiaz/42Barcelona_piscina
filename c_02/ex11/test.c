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

char	*ft_putstr_non_printable(char *str);

int	main(void)
{
	char	t5[] = "  salut, c\aomm\bent tu vas ? 42\tmots quarante\r-deux; cinquante+et+un";
	char	t6[] = "Coucou\ntu vas bien ?";

	ft_putstr(t5);
	ft_putstr("\n");
	ft_putstr_non_printable(t5);
	ft_putstr(t6);
	ft_putstr("\n");
	ft_putstr_non_printable(t6);
}
