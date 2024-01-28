/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:39:23 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/31 11:01:33 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	while (i < n && s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	char str1[] = "Hello, ";
	char str2[] = "World!";
	int	n = 3;
	int	valeur = 0;

	valeur = ft_strncmp(str1, str2, n);
	printf("Valeur vaut: %d\n", valeur);
	return (0);
}*/
