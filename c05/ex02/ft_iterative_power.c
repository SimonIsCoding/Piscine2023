/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:44:15 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/02 15:21:10 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	final;

	i = 1;
	final = nb;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	while (i++ < power)
	{
		final *= nb;
	}
	return (final);
}
/*
int	main(int argc, char *argv[])
{
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/
/*
int main(void)
{
	int	a;
	int b;

	a = 3; 
	b = 3;
	printf("%d\n", ft_iterative_power(a, b));
	return (0);
}*/
