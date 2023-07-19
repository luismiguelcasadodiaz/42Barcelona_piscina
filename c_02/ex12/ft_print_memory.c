/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:43:48 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 21:06:20 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_hex_of(long long num, int theme)
{
	int	dot;
	int	backslash;

	dot = 46;
	backslash = 92;
	if (theme == 0)
		write(1, &dot, 1);
	else
	{
		if (theme == 1)
			write(1, &backslash, 1);
		write(1, &"0123456789abcdef"[num / 16], 1);
		write(1, &"0123456789abcdef"[num % 16], 1);
	}
}

int	ft_in_rng(int min, int max, int c)
{
	if (min <= c && c <= max)
		return (1);
	else
		return (0);
}

int	ft_print_char(int c)
{
	return (ft_in_rng(32, 126, c));
}

void	ft_putstr_non_printable(char *str, int numchars)
{
	int	idx;
	int space;
	
	space = 32;
	if (str != NULL)
	{
		idx = -1;
		write(1, &space, 1);
		while (str[++idx] != '\0' && idx < numchars)
		{
			if (ft_print_char((int)str[idx]))
				write(1, &str[idx], 1);
			else
				ft_hex_of((int)str[idx], 0);
		}
	}
}

void	ft_show_hex_num(long long ll, int deep)
{
	if (ll > 16)
		ft_show_hex_num(ll / 16, deep + 1);
	if (deep > 11)
		ft_hex_of(0, 2);
	ft_hex_of(ll, 2);

}
		//ft_show_hex(&(addr + (line * 16)));
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	num_lines;
	unsigned int	line;
	long long		ll;
	int				deep;

	deep = 0;
	ll = (long long)addr;
	num_lines = 0;
	num_lines = size / 16;
	line = 0;
	while (line < num_lines)
	{
		ft_show_hex_num(ll, deep);
		ft_putstr_non_printable((char *)ll, 16);
		printf("\n");
		line++;
		ll += 16;
		}
	return (addr);
}
