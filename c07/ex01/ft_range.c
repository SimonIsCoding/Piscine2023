/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:53:51 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/09 11:16:29 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*n_range;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	n_range = malloc ((max - min) * sizeof (int));
	if (n_range == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		n_range[j] = i;
		i++;
		j++;
	}
	return (n_range);
}
/*
int	main(void)
{
	int	min = 3;
	int	max = 6;
	int i = 0;

	while (i < (max - min))
	{
		printf("%d\n", ft_range(min, max)[i]);
		i++;
	}
}*/
