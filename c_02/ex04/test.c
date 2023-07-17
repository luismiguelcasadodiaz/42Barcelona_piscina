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

int ft_str_is_lowercase(char *str);

int	main(void)
{
	if (ft_str_is_lowercase("abcd"))
		ft_putstr("Is lowercase\n");
	else
		ft_putstr("Is no lowercase\n");
	if (ft_str_is_lowercase("abdD"))
		ft_putstr("Is lowercase\n");
	else
		ft_putstr("Is no lowercase\n");
	if (ft_str_is_lowercase("1bcd"))
		ft_putstr("Is lowercase\n");
	else
		ft_putstr("Is no lowercase\n");
	if (ft_str_is_lowercase(""))
		ft_putstr("Is lowercase\n");
	else
		ft_putstr("Is no lowercase\n");
}
