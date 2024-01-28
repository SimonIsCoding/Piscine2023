/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:08:05 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/29 21:30:15 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0' && src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] != '\0')
		i++;
	return(i);
}

int	main(void)
{

	ft_strlcpy(dest[10], "Hello, World!", 10);
}
