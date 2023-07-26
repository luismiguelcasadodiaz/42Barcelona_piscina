/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:43:37 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/26 22:17:14 by luicasad         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	if (str != NULL)
	{
		while (str[idx] != '\0')
			idx++;
	}
	return (idx);
}

/* ************************************************************************** */
/* ft_clean  Removes all isspace(3) spaces and '+'s, filling hole with the    */
/*           char at the right.                                               */
/*           Counts '-' informing is count is even or odd thru *sign          */
/*           Counts '-' before numbers only                                   */
/* RETURNS   trimmed string.                                                  */
/* ************************************************************************** */
char	*ft_clean(char *txt, int *negative)
{
	int	idx;
	int	non_spaces;
	int	rmove;
	int	negatives;
	int	in_num;

	in_num = 0;
	negatives = 0;
	non_spaces = 0;
	idx = -1;
	while (txt[++idx] < 58 && txt[idx] != '\0')
	{
		rmove = (txt[idx] == ' ' || txt[idx] == '\f' || txt[idx] == '\n');
		rmove = (rmove || txt[idx] == '\r' || txt[idx] == '\t');
		rmove = (rmove || txt[idx] == '\v');
		rmove = (rmove || txt[idx] == '+' || txt[idx] == '-');
		in_num = in_num + (48 <= txt[idx] && txt[idx] <= 57);
		if (!rmove)
			txt[non_spaces++] = txt[idx];
		else
			negatives += (!in_num && txt[idx] == '-');
	}
	txt[non_spaces] = '\0';
	*negative = negatives % 2;
	return (txt);
}

/* ************************************************************************** */
/* ft_pos_num Calculates the numeric value of a numeric string                */
/*                                                                            */
/*           Counts '-' informing is count is even or odd thru *sign          */
/* RETURNS    the numeric value in a int integer                              */
/* ************************************************************************** */
int	ft_pos_num(char *txt)
{
	int	len;
	int	weight;
	int	sum;

	sum = 0;
	weight = 1;
	len = -1;
	while (txt[++len] != '\0')
	{
	}
	while (--len >= 0)
	{
		sum += weight * (txt[len] - 48);
		weight = weight * 10;
	}
	return (sum);
}

int	ft_atoi(char *str)
{
	char			*txt;
	int				negative;

	txt = ft_clean(str, &negative);
	if (negative)
	{
		if (!ft_strcmp(txt, "2147483648"))
			return (INT_MIN);
		else
			return (-1 * ft_pos_num(txt));
	}
	else
		return (ft_pos_num(txt));
}
