/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:11:41 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/23 23:30:59 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rules_mem.h"
#include "rules.h"
#include "memory.h"
#include "texts.h"
#include "texts2.h"
#include "textsaux.h"

char	**create_empty_rule(void)
{
	char	**rule;

	rule = allocate_buff_buff_char(2);
	return (rule);
}

void	delete_rule(char **rule)
{
	de_allocate_buff_buff_char(rule, 2);
}

struct s_key_value	*split_rule(char	*txt)
{
	char				**splited_rule;
	struct s_key_value	*rule;
	int					size_key_txt;
	int					size_trans;

	splited_rule = process_str2(txt, ":", create_empty_rule());
	size_key_txt = ft_strlen(splited_rule[0]);
	size_trans = ft_strlen(splited_rule[1]);
	rule = allocate_s_key_value(size_key_txt, size_trans);
	rule->key_txt = ft_strcpy(rule->key_txt, splited_rule[0]);
	rule->trans = ft_strcpy(rule->trans, splited_rule[1]);
	delete_rule(splited_rule);
	return (rule);
}

char	*busco(char *key, struct s_key_value **dict, int size)
{
	int		found;
	int		idx;
	char	error;
	char	*perror;

	error = '\0';
	perror = & error;
	found = 0;
	idx = 0;
	while (idx < size && !found)
	{
		if (!ft_strcmp(dict[idx]->key_txt, key))
			found = 1;
		idx++;
	}
	if (found)
		return (dict[--idx]->trans);
	else
		return (perror);
}

struct s_key_value	**split_all_rules(char **lines, int size)
{
	struct s_key_value	**dict;
	int					idx;

	dict = allocate_dict(size);
	idx = 0;
	while (idx < size)
	{
		dict[idx] = split_rule(lines[idx]);
		idx++;
	}
	return (dict);
}
