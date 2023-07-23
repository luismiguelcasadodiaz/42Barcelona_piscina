/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:25:34 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/23 23:43:26 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "file.h"
#include "texts.h"
#include "textsaux.h"
#include "memory.h"
#include "rules.h"

int	main(int argc, char **argv)
{
	char				**lines;
	struct s_key_value	**dict;
	int					num_lines;
	char				*trans;

	if (argc == 2)
	{
		if (filename_exists(argv[1]))
		{
			lines = read_lines(argv[1], &num_lines);
			dict = split_all_rules(lines, num_lines);
			trans = busco("20", dict, num_lines);
			printf("%s\n", trans);
			trans = busco("12", dict, num_lines);
			printf("%s\n", trans);
			de_allocate_buff_buff_char(lines, num_lines);
			de_allocate_buff_buff_char(lines, num_lines);
		}
	}
	else
	{
		write (1, &"Missing argument\n", 17); 
	}
	printf("fin\n");
	return (0);
}
