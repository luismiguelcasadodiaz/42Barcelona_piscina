/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:18:47 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/19 16:07:17 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	t5[] = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	char	*p;

	p = ft_print_memory(&t5, 16 * 1);
/*	p = ft_print_memory(&t5, 16 * 1);
	p = ft_print_memory(&t5, 16 * 2);
	p = ft_print_memory(&t5, 16 * 3);
	p = ft_print_memory(&t5, 16 * 4);
	p = ft_print_memory(&t5, 16 * 5);
	p = ft_print_memory(&t5, 16 * 6);

	*/
	return (0);
}
