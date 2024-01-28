/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_word.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:54:54 by mvallhon          #+#    #+#             */
/*   Updated: 2023/11/07 19:22:02 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_strstr(char *str, char *to_find)//on veut trouver notre numero dans le dictionnaire
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
				return (str + i + j);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

void	get_phrase(char *str)//on ecrit le numero en toutes lettres avec uun espacce a la fin du mot
{
	int	i;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	while (str[i] != '\n')
	{
		write(1, &str[i], 1);
		i++;
	}
	if (str[i])
		write(1, " ", 1);
}

int	ft_read2(char *file, char *nb)//condtion to check get phrase => si notre sous chaine nest pas vide, alors on appelle la fonction, sinon on retrourne une erreur
{
	char	*c;

	c = ft_strstr(file, nb);
	if (c == NULL)
	{
		write(1, "Dict Error\n", 11);
		free(file);
		return (0);
	}
	get_phrase(c);
	free(file);
	return (1);
}

void	ft_read(char *name_archivo, char *nb)
{
	int		archivo;
	char	buffer;
	char	*file;
	int		i;

	file = (char *) malloc(500);
	if (!(file))
		return ;
	i = 0;
	archivo = open(name_archivo, O_RDONLY);
	if (archivo == -1)//si on peut pas l'ouvrir on retourne un erreur
	{
		write(1, "Dict Error\n", 11);
		free(file);
		return ;
	}
	while (read(archivo, &buffer, 1) == 1)//on va la lire une par une
	{
		file[i] = buffer;//pour lire les numeros dans le dictionnaire un a un
		i++;
	}
	file[i] = '\0';
	close(archivo);
	ft_read2(file, nb);
}
