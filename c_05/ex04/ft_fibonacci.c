/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:29:27 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/27 19:29:30 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else
	{
		if (index == 0)
			return (0);
		if (index == 1)
			return (1);
		return (ft_fibonacci (index - 1) + ft_fibonacci(index - 2));
	}
}
