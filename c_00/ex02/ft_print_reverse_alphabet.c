/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:32:45 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/06 11:32:57 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		n;

	n = write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
