/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:09:38 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 19:10:25 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	num;
	int	*p_num;
	int	**pp_num;
	int	***ppp_num;
	int	****pppp_num;
	int	*****ppppp_num;
	int	******pppppp_num;
	int	*******ppppppp_num;
	int	********pppppppp_num;
	int	*********ppppppppp_num;

	num = 0;
	p_num = &num;
	pp_num = &p_num;
	ppp_num = &pp_num;
	pppp_num = &ppp_num;
	ppppp_num = &pppp_num;
	pppppp_num = &ppppp_num;
	ppppppp_num = &pppppp_num;
	pppppppp_num = &ppppppp_num;
	ppppppppp_num = &pppppppp_num;
	ft_ultimate_ft(ppppppppp_num);
	printf("El valor de la variables es %d", *********ppppppppp_num);
}
