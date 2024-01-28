/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:03:47 by simarcha          #+#    #+#             */
/*   Updated: 2024/01/10 17:06:54 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	if (i < size)
	{
		while (src[j] != '\0' && i + j + 1 < size)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	while (src[j] != '\0')
		j++;
	return (i + j);
}

int main() {
    // Chaînes source et destination
    char destination[20] = "Hello, ";
    const char *source = "world!";
    char sim_dst[20] = "Hello, ";
    const char *sim_src = "world!";

    // Utilisation de strlcat pour concaténer les chaînes
    size_t result = strlcat(destination, source, 3);

    // Affichage du résultat
    printf("Résultat de strlcat : %s\n", destination);
    printf("Taille totale de la chaîne : %zu\n", result);

	size_t result_simon = ft_strlcat(sim_dst, sim_src, 3);

    // Affichage du résultat
    printf("Résultat de Simon's strlcat : %s\n", sim_dst);
    printf("Taille totale de la Simon's chaîne : %zu\n", result_simon);
    return 0;
}
