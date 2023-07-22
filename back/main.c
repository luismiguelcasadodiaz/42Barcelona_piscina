/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:25:34 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 22:18:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "file.h"
#include "texts.h"

int	main(int argc, char **argv)
{
	char	**lines;
	int		i;

	if (argc == 2)
	{
		if (filename_exists(argv[1]))
		{
			printf("File  %s has %d lines\n", argv[1], count_lines(argv[1]));
			lines = read_lines(argv[1]);
			i = 0;
			while (i < 32)
			{	
				printf("Rule %d key= %s  \n", i, lines[i]);
				i++;
			}
		}
	}
	else
		write (1, &"Missing argument\n", 17); 
	return (0);
}
