/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:57:17 by luicasad          #+#    #+#             */
/*   Updated: 2023/07/12 19:01:09 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	how_first(int num)
{
	printf("%d", num);
}

void	show_number(int num)
{
	printf(", %d", num);
}

int	power_of(int base, int exp)
{
	   int power;

	   power = 1;
	   while (0 < exp)
	   {
	           power = power * base;
	           --exp;
	   }
	   return (power);
}

int	find_initial(int n)
{
	   int c;
	   int num;

	   num = 0;
	   c=1;
	   while (c < n)
	   {
	           num = num +  c * power_of(10, n - c -1);
	           c++;
	   }
	   return (num);
} 
int	find_final(int n)
{
	   int c;
	   int num;

	   num = 0;
	   c=0;
	   while (c < n)
	   {
	           num = num + (10 - n  + c) * power_of(10, n - c -1);
	           c++;
	   }
	   return (num);
}   
void	ft_print_combn(int n)
{
 int init;
 int last;

 if (0 < n && n < 10)
 {
	    init = find_initial(n);
	    last = find_final(n);
	    show_first(init++);
	        while (init <= last)
	        show_number(init++);
 }
}


