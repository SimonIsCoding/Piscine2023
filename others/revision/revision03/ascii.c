/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:57:41 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/06 18:56:36 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	height_arg(char *argv)
{
	int	i;
	int	ascii;

	i = 0;
	ascii = 0;
	while (argv[i] != '\0')
	{
		ascii = ascii + (argv[i] * '0');
		i++;
	}
	return (ascii);
}

int	ascii_check_index_1(char **argv)
{
	int	ascii_max;
	int	ascii_min;

	ascii_max = 1017;
	ascii_min = 0;
	if (argv[1][0] == '\0' || height_arg(argv[1]) > ascii_max ||
			height_arg(argv[1]) < ascii_min)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%d\n", height_arg(argv[1])); 
	}
}
