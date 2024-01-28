/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:26:34 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/08 20:55:36 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_store(char *str)
{
	char	*c;
	int		i;
	int		j;

	i = 0;
	c = "";
	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] != str[i])
				c += str[i];
			j++;
		}
		i++;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c;

	i = 1;
	c = "";
	if (argc != 3)
	{
		write(1, "\n", 1);
	}
	else 
	{
		  while (i < 3)
		  {
			  j = 0;
			  while (argv[i][j] != '\0')
			  {
				  c = c + ft_store(&argv[i][j]);
				  j++;
			  }
			  i++;
		  }
	}
	write(1, &c, ft_strlen(c));
	return (0);
}
