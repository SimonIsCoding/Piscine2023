/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:52:22 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/08 13:10:20 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	height_arg(char *argv);
int	ascii_check_index_1(char **argv);
int	ascii_check_index_2(char **argv);
int	ft_check_argc_is_2(char **argv);
int	ft_check_argc_is_3(char **argv);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_zero(char **argv)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (argv[i][0] == '0' && ft_strlen(*argv) > 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc > 3 || argc < 2)
		write(1, "Error\n", 6);
	else if (argc == 2)
	{
		if (ascii_check_index_1(argv) == 1 && ft_check_zero(argv) == 1)
			ft_check_argc_is_2(argv);
		else
			write(1, "Error\n", 6);
	}
	else if (argc == 3)
	{
		if (ascii_check_index_2(argv) == 1 && ft_check_zero(argv) == 1)
			ft_check_argc_is_3(argv);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
