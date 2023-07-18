/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 19:56:23 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

char	*ft_strlowcase(char *str);

int	main(void)
{
	ft_putstr((ft_strlowcase("a\n")));
	ft_putstr((ft_strlowcase("abCD\n")));
	ft_putstr((ft_strlowcase("")));
	ft_putstr((ft_strlowcase("ABi,d\n")));
	ft_putstr((ft_strlowcase("1234\n")));
	ft_putstr((ft_strlowcase("qwEerY_tyuiop\n")));
	ft_putstr((ft_strlowcase("zxcvbnm,./ABCD\n")));
}
