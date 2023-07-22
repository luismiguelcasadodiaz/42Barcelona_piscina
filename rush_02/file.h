/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:58:12 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 22:12:24 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FILE_H
# define FILE_H

int		filename_exists(char *filename);
int		count_lines(char *filename);
char	**read_lines(char *filename);
#endif
