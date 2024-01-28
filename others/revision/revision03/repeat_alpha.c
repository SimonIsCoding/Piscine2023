/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:07:16 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/08 19:48:32 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat(char c)
{
	int	j;

	j = 0;
	if (c >= 'a' && c <= 'z')
	{
		j = c - 'a';
		while (j > -1)
		{
			write(1, &c, 1);
			j--;
		}
	}
	else if (c >= 'A' && c <= 'Z')
	{
		j = c - 'A';
		while (j > -1)
		{
			write(1, &c, 1);
			j--;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') ||
				   	(argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				ft_repeat(argv[1][i]);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	argv[1][i] = '\0';
	return (0);
}
