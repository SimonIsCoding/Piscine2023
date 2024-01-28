/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:00:43 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/02 15:21:39 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	y;
	int	x;

	if (nb == 0 || nb == 1)
		return (nb);
	x = nb;
	y = (x + 1) / 2;
	while (y < x)
	{
		x = y;
		y = (x + nb / x) / 2;
	}
	if (x * x == nb)
		return (x);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	argc = 0;
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}*/
