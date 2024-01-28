/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:33:15 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/09 18:08:09 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *str)
{
	int		i;
	int		l;
	char	*dest;

	i = 0;
	l = 0;
	while (str[l] != '\0')
		l++;
	dest = malloc(sizeof(int) * (l + 1));
	if (dest == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	printf("%s\n", ft_strdup("test"));
	return (0);
}
