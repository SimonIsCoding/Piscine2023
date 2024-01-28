/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:36:15 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/25 16:58:21 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	palabra1[] = "Test";
	char	palabra2[] = "Je suis Simon";
	char	*destino;

	printf("%s\n%s", palabra1, palabra2);
	printf("\n");
	destino = ft_strcpy(palabra1, palabra2);
	printf("%s\n%s", palabra1, destino);
	return (0);
}*/
