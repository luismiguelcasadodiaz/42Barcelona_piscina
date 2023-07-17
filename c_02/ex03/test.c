/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/13 18:35:23 by luicasad         ###   ########.fr       */
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

int ft_str_is_numeric(char *str);

int	main(void)
{
	if (ft_str_is_numeric("1234"))
		ft_putstr("Is numeric\n");
	else
		ft_putstr("Is no numeric\n");
	if (ft_str_is_numeric("123r"))
		ft_putstr("Is numeric\n");
	else
		ft_putstr("Is no numeric\n");
	if (ft_str_is_numeric("t456"))
		ft_putstr("Is numeric\n");
	else
		ft_putstr("Is no numeric\n");
	if (ft_str_is_numeric(""))
		ft_putstr("Is numeric\n");
	else
		ft_putstr("Is no numeric\n");
}
