/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:54:36 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/25 18:48:21 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
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
	destino = ft_strcpy(palabra1, palabra2, 3);
	printf("%s\n%s", palabra1, destino);
	return (0);
}*/
