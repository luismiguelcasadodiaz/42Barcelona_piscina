/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:36:00 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 20:09:18 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_in_rng(int min, int max, int c)
{
	if (min <= c && c <= max)
		return (1);
	else
		return (0);
}

int	ft_lower_char(int c)
{
	return (ft_in_rng(97, 122, c));
}

int	ft_str_is_lowercase(char *str)
{
	int	idx;
	int	solution;

	solution = 0;
	if (str[0] != '\0')
	{
		solution = 1;
		idx = 0;
		while (str[idx] != '\0')
		{
			if (ft_lower_char((int)str[idx]))
				idx++;
			else
			{
				solution = 0;
				break ;
			}
		}
	}
	else
		solution = 1;
	return (solution);
}
