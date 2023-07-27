/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:04:02 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/26 22:48:38 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <limits.h>

/* ************************************************************************** */
/* ft_pos_num Calculates the numeric value of a numeric string                */
/*                                                                            */
/*           Counts '-' informing is count is even or odd thru *sign          */
/* RETURNS    the numeric value in a int integer                              */
/* ************************************************************************** */
int	ft_pos_num(char *txt, char *base, int num_base)
{
	int	len;
	int	weight;
	int	sum;
	int	idx;

	sum = 0;
	weight = 1;
	len = -1;
	while (txt[++len] != '\0')
	{
	}
	while (--len >= 0)
	{
		idx = -1;
		while (base[++idx] != txt[len] && base[idx] != '\0')
		{
		}
		sum += weight * idx;
		weight = weight * num_base;
	}
	return (sum);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num_base;
	int	j;
	int	ok;

	ok = 1;
	num_base = -1;
	while (ok && base[++num_base] != '\0')
	{
		j = num_base + 1;
		ok = (base[num_base] != '+' && base[num_base] != '-');
		while (ok && base[j] != '\0')
			ok = (base[num_base] != base[j++]);
	}
	if (ok && num_base > 1)
		return (ft_pos_num(str, base, num_base));
	else
		return (0);
}
