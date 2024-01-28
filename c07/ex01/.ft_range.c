/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:04:31 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/04 12:10:58 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	fnt_range(int min, int max)
{
	int	*tab[max - min];

	while (min++ < max)
		tab[min] = min;
	return (tab);
}
/*
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	
	i = min - 1;
	if (!(tab = (int*)malloc(sizeof(int) * ft_strlen(tab) + 1)))
		return NULL;
	if (min >= max)
		return NULL;
	while (i++ < max)
		tab[i] = i;
	return (tab);
	
}*/

int	main(int argc, char *argv[])
{
	int tabla[];
	fnt_range = 
}
