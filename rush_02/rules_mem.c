/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:42:01 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/23 23:33:34 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "rules.h"
#include "memory.h"

struct s_key_value	*allocate_s_key_value(int s_txt, int s_trans)
{
	struct s_key_value	*buffer;

	buffer = (struct s_key_value *)malloc(sizeof(struct s_key_value));
	if (buffer == NULL)
	{
		write(2, &"Error memory allocation.\n", 25);
		return (buffer);
	}
	buffer->key_txt = allocate_buffer_char(s_txt);
	buffer->key_num = 0;
	buffer->trans = allocate_buffer_char(s_trans);
	return (buffer);
}

void	de_allocate_s_key_value(struct s_key_value *key)
{
	de_allocate_buffer_char(key->key_txt);
	de_allocate_buffer_char(key->trans);
	free(key);
}

struct s_key_value	**allocate_dict(int size)
{
	struct s_key_value	**buffers;

	buffers = (struct s_key_value **)malloc(size * sizeof(struct s_key_value *));
	if (buffers == NULL)
	{
		write(2, &"Error memory allocation.\n", 25);
		return (buffers);
	}
	return (buffers);
}

void	de_allocate_dict(struct s_key_value **dict, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		de_allocate_s_key_value(dict[idx++]);
	}
	free(dict);
}
