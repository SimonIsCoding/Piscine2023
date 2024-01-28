/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:54:30 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/09 14:52:34 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0' && src[i] != '\0')
	{
		if (dest[i] != src[i])
		{
			return (dest[i] - src[i]);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;
	int		j;

	i = 1;
	j = 0;
	temp = "";
	while (argv[i][j] != '\0' && (i < ft_strlen(argv[i] - 1) && argc > 0))
	{
		while (argv[i][j] != '\0')
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				j = 0;
			}
			else
				j++;
		}
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
