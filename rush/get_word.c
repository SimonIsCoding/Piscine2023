/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_word.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:41:14 by cgaratej          #+#    #+#             */
/*   Updated: 2023/11/05 11:13:06 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (-1);
}

void	get_phrase(char *str)
{
	int	i;

	i = 0;
	while (str[i - 1] != ' ')
		i++;
	while (str[i] != '\n')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_read(char *name_archivo, char *nb)
{
	int		archivo;
	char	buffer;
	char	*file;
	int		i;
	char	*c;

	file = (char *) malloc(500);
	if (!(file))
		return (NULL);
	i = 0;
	archivo = open(name_archivo, O_RDONLY);
	if (archivo == -1)
	{
		write(1, "Dict Error\n", 11);
		free(file);
		return ;
	}
	while (read(archivo, &buffer, 1) == 1)
	{
		file[i] = buffer;
		i++;
	}
	file[i] = '\0';
	close(archivo);
	c = ft_strstr(file, nb);
	if (archivo == -1)
	{
		write(1, "Dict Error\n", 11);
		free(file);
		return ;
	}
	while (read(archivo, &buffer, 1) == 1)
	{
		file[i] = buffer;
		i++;
	}
	file[i] = '\0';
	close(archivo);
	c = ft_strstr(file, nb);
	if (c == - 1)
	{
		free(file);
		return ;
	}
	get_phrase(c);
	free(file);
}

int	main(void)
{
	ft_read("numbers.dict", "1000000000");
	return (0);
}
