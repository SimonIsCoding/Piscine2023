/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:04:48 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/22 18:04:09 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y)
{
	int		counter_y;
	int		counter_x;
	char	line_break;
	char	a;
	char	b;

	a = 'A';
	b = 'B';
	counter_x = 0;
	counter_y = 0;
	line_break = '\n';
	while (counter_y < y)
	{
		counter_x = 0;
		while (counter_x < x)
		{
			if (counter_x == 0 || counter_x == x)
				write(1, &a, 1);
			else
				write(1, &b, 1);
			counter_x++;
		}
		write(1, &line_break, 1);
		counter_y++;
	}
}

int	main(void)
{
	ft_putchar(5, 5);
	return (0);
}
