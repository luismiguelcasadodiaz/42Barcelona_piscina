/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 20:05:09 by luicasad         ###   ########.fr       */
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

int ft_str_is_alpha(char *str);

int	main(void)
{
	if (ft_str_is_alpha("1234"))
		ft_putstr("Is alpha\n");
	else
		ft_putstr("Is no alpha\n");
	if (ft_str_is_alpha("123r"))
		ft_putstr("Is alpha\n");
	else
		ft_putstr("Is no alpha\n");
	if (ft_str_is_alpha("t4\n56"))
		ft_putstr("Is alpha\n");
	else
		ft_putstr("Is no alpha\n");
	if (ft_str_is_alpha(""))
		ft_putstr("Is alpha\n");
	else
		ft_putstr("Is no alpha\n");
}
