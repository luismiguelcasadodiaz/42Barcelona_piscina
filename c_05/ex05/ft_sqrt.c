/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:15:49 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/27 21:58:13 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	aux;

	aux = 1;
	if (0 <= nb && nb < 2)
		return (nb);
	while (!((aux * aux) <= nb && nb <= ((aux + 1) * (aux + 1))))
		aux++;
	if ((aux * aux) == nb)
		return (aux);
	if (((aux + 1) * (aux + 1)) == nb)
		return (aux + 1);
	return (0);
}
