/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:38:23 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/27 23:46:51 by luicasad         ###   ########.fr       */
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

void	ft_swap(char *a, char *b)
{
	char *c;
	
   	

void	sort(char **argv, int argc)
{
	int ini;
	int fin;

	ini = 1;
	fin = argc;
	while (ini <= argc)
	{
		ft_swap(argv[ini++], argv[fin--])
	}
}
int main(int argc, char **argv)
{	
	int	ini;

	if (argc > 1)
	{
		
		ini = 1;
		while (ini <= argc)
		{
			ft_putstr(argv[ini++]);
			ft_putstr("\n");
		}
	}
	return(0);
}
