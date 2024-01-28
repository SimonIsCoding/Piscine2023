/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cuadrado.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:49:29 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/27 13:04:09 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cuadrado(int x)
{
	char	c;
	int		i;
	int		j;

	c = '*';
	i = 0;
	while (i < x)
	{
		j = 0;
		while(j < x)
		{
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	cuadrado(3);
	return (0);
}
