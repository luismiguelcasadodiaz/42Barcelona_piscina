/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:32:58 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/21 13:57:48 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

/* ************************************************************************** */
/* ft_strlcpy copy src into a buffer dst with size spaces                     */
/*            null termitates the copy                                        */
/* RETURNS    size of src string.                                             */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;
	int	result;

	i = -1;
	while (++i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
	}
	if (i == n)
		result = 0;
	else
		result = s1[i] - s2[i];
	return (result);
}
