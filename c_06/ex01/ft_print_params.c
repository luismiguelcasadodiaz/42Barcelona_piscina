/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:38:23 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/27 22:53:08 by luicasad         ###   ########.fr       */
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

int main(int argc, char **argv)
{	
	int	idx;

	if (argc > 1)
	{
		idx = 1;
		while (idx <= argc)
		{
			ft_putstr(argv[idx++]);
			ft_putstr("\n");
		}
	}
	return(0);
}
