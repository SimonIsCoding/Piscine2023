/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:08:36 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/31 12:03:59 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	x;
	int		check;

	check = 0;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		x = '8';
		ft_putnbr(214748364);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		check = 1;
		ft_putnbr(nb * -1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		x = (nb % 10) + '0';
	}
	else
		x = (nb % 10) + '0';
	if (check != 1)
		write(1, &x, 1);
}
/*
int	main(void)
{
	int		number;

	number = -2147483648;
	ft_putnbr(number);
	return (0);
}*/
//Aim: transform int into char => with write function
