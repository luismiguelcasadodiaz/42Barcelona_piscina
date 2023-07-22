/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:58:12 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 22:01:03 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "memory.h"
#include "texts.h"

#define BUFFER_SIZE	4096

int	filename_exists(char *filename)
{
	int	resultado;
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error opening file.\n", 20);
		resultado = 0;
	}
	else
	{
		resultado = 1;
		close(fd);
	}
	return (resultado);
}

/* ************************************************************************** */
/* count lines return the number of \n caracters found in a filename.         */
/* 		returns -1 when any error happens                                     */
/* ************************************************************************** */
int	count_lines(char *filename)
{
	int		fd;
	char	*buffer;
	int		num_lines;
	int		buffer_idx;
	int		bytes_read;

	fd = open(filename, O_RDONLY);
	buffer = allocate_buffer_char(BUFFER_SIZE);
	num_lines = 0;
	buffer_idx = 0;
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer_idx = 0;
		while (buffer_idx <= bytes_read)
			if (buffer[buffer_idx++] == '\n')
				num_lines++;
	}
	free(buffer);
	close(fd);
	return (num_lines);
}

/* ************************************************************************** */
/* Read lines returns **char wiht all lines found inside the filename.        */
/* 		returns -1 when any error happens                                     */
/* ************************************************************************** */
char	**read_lines(char *filename)
{
	int		fd;
	char	**buffers;
	char	*buffer;

	buffer = allocate_buffer_char(BUFFER_SIZE);
	buffers = allocate_buff_buff_char(count_lines(filename));
	fd = open(filename, O_RDONLY);
	while (read(fd, buffer, BUFFER_SIZE) > 0)
	{
		process_str(buffer, "\n", buffers);
	}
	close(fd);
	return (buffers);
}
