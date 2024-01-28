/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:46:48 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/21 17:03:55 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_x(char x)
{
	char	counter_x;
	char	counter;

	counter_x = 0;
	counter = 0;
	while (counter <= x)
	{
		if (counter_x == 0)
			write(1, "A", 1);
		if (counter_x == x)
			write(1, "C", 1);
		else
			write(1, "B", 1);
		counter++;
		counter_x++;
	}
}

void	ft_putchar_y(char y)
{
	char	counter_y;
	char	counter;

	counter_y = 0;
	counter = 0;
	while (counter <= y)
	{
		if (counter_y == 0)
		{
			write(1, "A", 1);
			write(1, "\n", 1);
		}
		if (counter_y == y)
		{
			write(1, "C", 1);
			write(1, "\n", 1);
		}
		else
		{
			write(1, "B", 1);
			write(1, "\n", 1);
		}
		counter++;
		counter_y++;
	}
}

void	ft_putchar(char x, char y)
{
	ft_putchar_x(x);
	ft_putchar_y(y);
}

int	main(void)
{
	ft_putchar_x(5);
	ft_putchar_y(4);
	return (0);
}
