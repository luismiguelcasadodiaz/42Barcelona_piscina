/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:43:48 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/20 19:20:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* ************************************************************************** */
/* ft_hex_of prints a integer < 128 .                                         */
/* NON printable char are printed according to the theme                      */
/* 	theme = 0 print a point '.'                                               */
/*  theme = 1 print wiht slash  '\0a'                                         */	
/*  theme = 2 print regular template '0a'                                     */
/* ************************************************************************** */
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

/*58 = colon | 32 = space*/
void	ft_putstr_hexadecimal(char *str, int numchars)
{
	int	idx;

	if (str != NULL)
	{
		idx = -1;
		while (str[++idx] != '\0' && idx < numchars)
		{
			ft_hex_of((int)str[idx], 2);
			if (idx % 2 == 1)
				write(1, &" ", 1);
		}
		if (str[idx] == '\0')
		{
			ft_hex_of(0, 2);
			if (++idx % 2 == 0)
				write(1, &" ", 1);
		}
		while (idx < numchars)
		{
			write(1, &"  ", 2);
			if (idx % 2 == 1)
				write(1, &" ", 1);
			idx++;
		}
	}
}

void	ft_putstr_non_printable(char *str, int numchars)
{
	int	idx;
	int	space;

	space = 32;
	if (str != NULL)
	{
		idx = -1;
		while (str[++idx] != '\0' && idx < numchars)
		{
			if (32 <= (int)str[idx] && (int)str[idx] <= 126)
				write(1, &str[idx], 1);
			else
				ft_hex_of((int)str[idx], 0);
		}
		if (str[idx] == '\0')
			ft_hex_of(0, 0);
		write(1, &"\n", 1);
	}
}

void	ft_show_hex_num(long long ll, int deep)
{
	if (ll > 16)
		ft_show_hex_num(ll / 16, deep + 1);
	write(1, &"0123456789abcdef"[ll % 16], 1);
}

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
	while (line <= num_lines)
	{
		ft_show_hex_num(ll, deep);
		write(1, &": ", 2);
		ft_putstr_hexadecimal((char *)ll, 16);
		ft_putstr_non_printable((char *)ll, 16);
		line++;
		ll += 16;
	}
	return (addr);
}
