/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:42:01 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 20:54:52 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MEMORY_H
# define MEMORY_H

char	*allocate_buffer_char(int size);
char	**allocate_buff_buff_char(int size);
void	de_allocate_buff_buff_char(char **buffer, int size);
void	de_allocate_buffer_char(char *buffer);
#endif
