/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:26:44 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/27 14:45:07 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			temp = tab[i];
			tab[i] = tab[i - size - 1];
			tab[i - size - 1] = temp;
		i++;
	}
}

int	main(void)
{
*/

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		else
			i++;
	}
}

void	imprimir_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", *tab(i + 1));
		i++;
	}
	printf("\n");
}

int main()
{
    int tableau[] = {5, 2, 8, 1, 9, 3};
	int longueur = 6;

	imprimir_array(tableau, longueur);
	ft_sort_int_tab(tableau, longueur);
	imprimir_array(tableau, longueur);
	return 0;
}
