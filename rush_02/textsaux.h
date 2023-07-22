/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textsaux.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 21:51:09 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/22 21:51:31 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef TEXTSAUX_H
# define TEXTSAUX_H

void	ft_putstr(char *str);
int		is_separator(char car, char *charset);
char	*set_end_item(void);
char	*extract(char *str, int ini, int end, int *in_w);
void	count_items(char *str, char *charset, int *num_items);
#endif
