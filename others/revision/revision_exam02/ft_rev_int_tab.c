/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:30:55 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/02 20:53:23 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int	i;

	i = 0;
	while (tab[i] != '\0' && i < size / 2)
		{
			temp = tab[i];
			tab[i] = tab[size - i - 1];
			tab[size - i - 1] = temp;
			i++;
		}
}

void	imprimir(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	length;
	int	i;

	int table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	i = 0;
	length = 10;

	imprimir(table, length);
	printf("\n");
	printf("New Array is now: ");
	ft_rev_int_tab(table, length);
	imprimir(table, length);
}
