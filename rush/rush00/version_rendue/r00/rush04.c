/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svergara <svergara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:21:26 by svergara          #+#    #+#             */
/*   Updated: 2023/10/22 22:32:03 by svergara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letters);

void	letters_col(int x, int counter_c, char *letters)
{
	if (counter_c == 0)
	{
		ft_putchar(letters[0]);
	}
	else if (counter_c == (x - 1))
	{
		ft_putchar(letters[2]);
	}
	else
	{
		ft_putchar(letters[1]);
	}
}

void	ctrl_row(int x, int y, int counter_c, int counter_r)
{
	char	letters[3];

	if (counter_r == 0)
	{
		letters[0] = 'A';
		letters[1] = 'B';
		letters[2] = 'C';
	}
	else if (counter_r == (y - 1))
	{
		letters[0] = 'C';
		letters[1] = 'B';
		letters[2] = 'A';
	}
	else
	{
		letters[0] = 'B';
		letters[1] = ' ';
		letters[2] = 'B';
	}
	letters_col(x, counter_c, letters);
}

void	rush(int x, int y)
{
	int	counter_r;
	int	counter_c;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error invalid arguments!!!", 20);
	}
	counter_r = 0;
	while (counter_r < y)
	{
		counter_c = 0;
		while (counter_c < x)
		{
			ctrl_row(x, y, counter_c, counter_r);
			counter_c++;
		}
		write(1, "\n", 1);
		counter_r++;
	}
}
