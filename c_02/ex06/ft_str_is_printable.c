/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:37:52 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/18 20:14:30 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_in_rng(int min, int max, int c)
{
	if (min <= c && c <= max)
		return (1);
	else
		return (0);
}

int	ft_print_char(int c)
{
	int	result;

	result = 0;
	result += ft_in_rng(32, 47, c);
	result += ft_in_rng(58, 64, c);
	result += ft_in_rng(91, 96, c);
	result += ft_in_rng(123, 126, c);
	return (result);
}

int	ft_str_is_printable(char *str)
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
			if (ft_print_char((int)str[idx]))
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
