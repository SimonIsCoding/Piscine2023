/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:04:01 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/07 11:02:57 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if ((max - min) <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	max = 21;
	int	min = 10;
	int	i;
	int	r;

	i = 0;
	r = ft_ultimate_range(&range, min, max);
	while (i < (min - max))
	{
		printf("%d\n", range[i]);
		i++;
	}
	printf("\nValeur de retour: %i", r);
}*/
