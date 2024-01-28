/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:58:44 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/08 13:10:23 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	calc(char *nums, char *dic);

int	height_arg(char *argv)
{
	int	i;
	int	ascii;

	i = 0;
	ascii = 0;
	while (argv[i] != '\0')
	{
		ascii = ascii + (argv[i] + '0');
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

int	ascii_check_index_2(char **argv)
{
	int	ascii_max;
	int	ascii_min;

	ascii_max = 1017;
	ascii_min = 0;
	if (argv[2][0] == '\0' || height_arg(argv[2]) > ascii_max ||
			height_arg(argv[2]) < ascii_min)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	ft_check_argc_is_2(char **argv)
{
	while (*argv[1] != '\0')
	{
		if (*argv[1] >= '0' && *argv[1] <= '9')
		{
			calc(argv[1], "numbers.dict");
			return (1);
		}
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}

int	ft_check_argc_is_3(char **argv)
{
	while (*argv[2] != '\0')
	{
		if (*argv[2] >= '0' && *argv[3] <= '9')
		{
			calc(argv[2], argv[1]);
			return (1);
		}
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}
