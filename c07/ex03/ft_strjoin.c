/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:43:33 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/08 15:11:10 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_full_length(char **str, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_strlen(str[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	int		i;
	char	*curr;

	if (size <= 0)
	{
		buffer = (char *) malloc (sizeof(char));
		*buffer = '\0';
		return (buffer);
	}
	i = ft_full_length(strs, size, ft_strlen(sep));
	buffer = (char *) malloc((i + 1) + (size - 1) * sizeof (char *));
	if (buffer == NULL)
		return (0);
	*buffer = '\0';
	i = 0;
	curr = buffer;
	while (i < size)
	{
		ft_strcat(buffer, strs[i]);
		if (i != size - 1)
			ft_strcat(buffer, sep);
		i++;
	}
	return (curr);
}
/*
int	main()
{
	char	*str[3];
	char	sep[100] = ", ";

	str[0] = "hola";
	str[1] = "Mundo";
	str[2] = "World";
	printf("%s\n", ft_strjoin(3, str, sep));
	return (0);
}*/
