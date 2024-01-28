/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:46:03 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/01 09:35:20 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while (nb != 1)
	{
		i = nb * i ;
		nb--;
	}
	return (i);
}
/*
int	main(void)
{
	int	a;

	a = -10;
	printf("result: %d\n", ft_iterative_factorial(a));
}*/
/*
int	main(int argc, char *argv[])
{
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}*/
