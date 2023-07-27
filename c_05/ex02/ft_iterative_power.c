/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:28:35 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/27 19:28:41 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************************************** */
/*		nb	power	sol	                                */
/*		0	0		1                                   */
/*		0	p		0^p=0                               */
/*		n	0		1                                   */
/*		n	p		n^p                                 */
/*                                                      */
/*      when power = 0 solution is 1                    */
/*                                                      */
/*       n^p = n * n * ... p times                      */
/*                                                      */

int	ft_iterative_power(int nb, int power)
{
	int	solution;

	if (0 <= power)
	{
		solution = 1;
		if (power == 0)
			return (solution);
		while (power--)
			solution = solution * nb;
		return (solution);
	}
	else
	{
		return (0);
	}
}
