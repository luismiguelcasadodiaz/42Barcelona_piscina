#include "memory.h"
#include "texts.h"

char **create_empty_rule(void)
{
	char **rule;

	rule = allocate_buff_buff_char(2);
	return (rule);
}

void	delete_rule(char **rule)
{
		//de_allocate_buffer_char(rule[0]);
		//de_allocate_buffer_char(rule[1]);
		de_allocate_buff_buff_char(rule, 2);
}
char	**split_rule(char	*rule)
{
	char	**splited_rule;

	splited_rule = process_str(rule, " :", create_empty_rule());
	return (splited_rule);
}


