/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:54:54 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/01 16:14:43 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	while (nb % i != 0 && nb != i)
		i++;
	if (i++ == nb)
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	printf("%d\n", ft_is_prime(atoi(argv[1])));
	return (0);
}*/
