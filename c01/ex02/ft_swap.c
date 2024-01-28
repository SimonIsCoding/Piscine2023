/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:20:01 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/25 16:45:01 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int x;
	int y;
	
	x = 10;
	y = 55;

	printf("Valeur antes swap: X=%d Y=%d", x, y);
	ft_swap(&x, &y);
	printf("\n");
	printf("Valeur despues intercambio: X=%d Y=%d", x, y);
}*/
