/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:07:33 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 20:20:38 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_sol(int board[4][4]);

void	ft_print_sol(int board[4][4])//we print the final solution
{
	int		i;
	int		j;
	char	val;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			val = board[i][j] + '0';//to convert the number into char
			ft_putchar(val);//we write it
			if (j < 3)
				ft_putchar(' ');//we are in the same line so we can add a space
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
