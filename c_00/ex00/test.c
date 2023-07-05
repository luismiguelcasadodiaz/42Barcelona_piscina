/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:42:07 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/05 21:10:24 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('u');
}

void	ft_putchar(char c)
{
	int	n;

	n = write(1, &c, 1);
	if (n == -1)
	{
		printf("I got a problem writing a char.");
	}
}
