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
/* ft_strcmp travels both string till finds a differences                     */
/*            null termitates the copy                                        */
/* RETURNS    size of src string.                                             */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = -1;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[++idx] != '\0' && s2[idx] != '\0' && s1[idx] == s2[idx])
		{
		}
		return (s1[idx] - s2[idx]);
	}
	return (0);
}

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
