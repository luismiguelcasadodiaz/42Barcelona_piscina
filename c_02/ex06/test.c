/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 20:14:31 by luicasad         ###   ########.fr       */
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

int ft_str_is_printable(char *str);

int	main(void)
{
	if (ft_str_is_printable(".,:;"))
		ft_putstr("Is printable\n");
	else
		ft_putstr("Is no printable\n");
	if (ft_str_is_printable(".,)2"))
		ft_putstr("Is printable\n");
	else
		ft_putstr("Is no printable\n");
	if (ft_str_is_printable("!#CD"))
		ft_putstr("Is printable\n");
	else
		ft_putstr("Is no printable\n");
	if (ft_str_is_printable(""))
		ft_putstr("Is printable\n");
	else
		ft_putstr("Is no printable\n");
}
