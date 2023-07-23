/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:42:01 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/23 23:35:40 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RULES_MEM_H
# define RULES_MEM_H

struct s_key_value	*allocate_s_key_value(int s_txt, int s_trans);
void				de_allocate_s_key_value(struct s_key_value key);
struct s_key_value	**allocate_dict(int size);
void				de_allocate_dict(struct s_key_value **dict, int size);
#endif
