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

int ft_str_is_uppercase(char *str);

int	main(void)
{
	if (ft_str_is_uppercase("ABCD"))
		ft_putstr("Is uppercase\n");
	else
		ft_putstr("Is no uppercase\n");
	if (ft_str_is_uppercase("ABdD"))
		ft_putstr("Is uppercase\n");
	else
		ft_putstr("Is no uppercase\n");
	if (ft_str_is_uppercase("1BCD"))
		ft_putstr("Is uppercase\n");
	else
		ft_putstr("Is no uppercase\n");
	if (ft_str_is_uppercase(""))
		ft_putstr("Is uppercase\n");
	else
		ft_putstr("Is no uppercase\n");
}
