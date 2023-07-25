/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:41:35 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/25 13:41:48 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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
