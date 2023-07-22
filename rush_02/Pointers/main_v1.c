/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebozbici <ebozbici@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:49:58 by ebozbici          #+#    #+#             */
/*   Updated: 2023/07/22 11:40:35 by ebozbici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
int main ( int argc, char** argv) 
{
	int i;
	i=0;
	if (argv[0]== + )
	{
		write(1, "n",1);
	}

		
	// if que comprueba que no se reciban mas de 2 argumentos 
	if(argc>3)
	{
		write(1, "Error, to many arguments",24);  
		return 0;
	}
	
		
	return 0;	
}

