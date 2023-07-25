/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:43:08 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/25 13:43:17 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

/* ************************************************************************** */
/* ft_strlen counts all char in str but last one when it is '\0' bounded      */
/*                                                                            */
/* ************************************************************************** */
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
/* ft_strstr finds the first occurrence of the substring tofind in the string */
/*           str.  The terminating null bytes ('\0') are not compared.        */
/* RETURNS   A pointer to the beginning of the located substring.             */
/*           NULL if the substring is not found.                              */
/*           If tofind is the empty string, the return value is always str    */
/* ************************************************************************** */
int	is_substr(char *str, char *tofind, int idx_str)
{
	int	idx;

	idx = 0;
	while (tofind[idx] != '\0' && str[idx_str + idx] == tofind[idx])
		idx++;
	return (tofind[idx] == '\0');
}

char	*ft_strstr(char *str, char *tofind)
{
	int	idx_str;
	int	found;
	int	tofind_s;
	int	str_s;

	tofind_s = ft_strlen(tofind);
	if (tofind_s == 0)
		return (str);
	else
	{
		str_s = ft_strlen(str);
		found = 0;
		idx_str = -1;
		while (++idx_str <= (str_s - tofind_s + 1) && !found)
			found = is_substr(str, tofind, idx_str);
		if (found)
			return (&str[--idx_str]);
		else
			return (NULL);
	}
}
