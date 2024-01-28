/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:54:48 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/06 17:28:48 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	new_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (new_word == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if (new_word == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A'))
			new_word = 0;
		else if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", ft_strcapitalize(argv[1]));
	}
}
