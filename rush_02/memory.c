/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:42:01 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 20:48:33 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	*allocate_buffer_char(int size)
{
	char	*buffer;

	buffer = (char *)malloc(size);
	if (buffer == NULL)
	{
		write(2, &"Error memory allocation.\n", 25);
		return (buffer);
	}
	return (buffer);
}

char	**allocate_buff_buff_char(int size)
{
	char	**buffers;

	buffers = (char **)malloc(size * sizeof(char *));
	if (buffers == NULL)
	{
		write(2, &"Error memory allocation.\n", 25);
		return (buffers);
	}
	return (buffers);
}
