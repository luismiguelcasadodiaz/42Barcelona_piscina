/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:36:18 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 19:36:21 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* El contenido de la direccion de memoria de A lo copio a C                  */
/* contenido de direccion memoria B, lo copio a la direccion de memoria A.    */
/* EL contenido de C lo copio a la direccion de memoria de B                  */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
