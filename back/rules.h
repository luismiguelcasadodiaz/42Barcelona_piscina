/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:10:44 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/23 23:36:39 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RULES_H
# define RULES_H

struct s_key_value
{
	char	*key_txt;
	int		key_num;
	char	*trans;
};

char				**create_empty_rule(void);
void				delete_rule(char **rule);
struct s_key_value	*split_rule(char	*rule);
char				*busco(char *key, struct s_key_value **dict, int size);
struct s_key_value	**split_all_rules(char **lines, int size);
#endif
