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
#include "memory.h"
#include "rules.h"

int	main(int argc, char **argv)
{
	char	**lines;
	char	**rule;
	int		num_lines;
	int		i;

	if (argc == 2)
	{
		if (filename_exists(argv[1]))
		{
			printf("File  %s has %d lines\n", argv[1], count_lines(argv[1]));
			lines = read_lines(argv[1], &num_lines);
			i = 0;
			while (i < num_lines)
			{
				rule = split_rule(lines[i]);
				printf("Rule %d key= >%s< value = >%s<  \n", i, rule[0], rule[1]);
				i++;
				delete_rule(rule);
			}
			printf("%s \n", lines[0]);
			de_allocate_buff_buff_char(lines, num_lines);
		}
	}
	else
		write (1, &"Missing argument\n", 17); 
	return (0);
}
