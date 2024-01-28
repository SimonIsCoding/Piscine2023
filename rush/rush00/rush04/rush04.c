/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:07:55 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/22 19:36:35 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(int x, int y, int f, int c);

void	rush(int x, int y)
{
	int	filas;
	int	columnas;

	filas = 0;
	while (filas < y)
	{
		columnas = 0;
		while (columnas < x)
		{
			put_char(x, y, filas, columnas);
			columnas++;
		}
		write(1, "\n", 1);
		filas++;
	}
}
