/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:17:22 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/07 15:15:53 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		i++;
	}
	return (&str[i]);
}
int	main(void)
{
	printf("%s\n", ft_strstr("ceci est du texte", "texte"));
}
