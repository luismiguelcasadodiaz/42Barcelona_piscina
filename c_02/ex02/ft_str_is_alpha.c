/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:33:56 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 20:02:35 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_in_rng(int min, int max, int c)
{
	if (min <= c && c <= max)
		return (1);
	else
		return (0);
}

int	ft_alpha_char(int c)
{
	return (ft_in_rng(32, 126, c));
}

int	ft_str_is_alpha(char *str)
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
			if (ft_alpha_char((int)str[idx]))
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
