/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:50:12 by simarcha          #+#    #+#             */
/*   Updated: 2023/11/03 13:11:09 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_mirror(char c)
{
	if (c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	else if (c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			print_mirror(argv[1][i]);
			i++;
		}
	}	
	return (0);
}
