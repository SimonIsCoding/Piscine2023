/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:16:25 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/02 17:25:31 by simarcha         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		++nb;
	return (nb);
}
/*
int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb > 2)
		nb = 2;
	i = nb;
	while (i < 2 * nb)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
*//*
int	main(int argc, char *argv[])
{
	argc = 0;
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}*/
