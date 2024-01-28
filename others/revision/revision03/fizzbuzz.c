/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:06:34 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/08 18:35:54 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

void	fizzbuzz(int nb)
{
	int	i;

	i = 1;
	while (i < nb)
	{
		if (i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else if ((i % 5 == 0) && (i % 3 == 0))
			write(1, "FizzBuzz", 8);
		else
			ft_write_number(i);
		write(1, " ", 1);
		i++;
	}
}

int	main(void)
{
	fizzbuzz(45);
	return (0);
}
