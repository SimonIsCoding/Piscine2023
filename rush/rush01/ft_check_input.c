/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:11:22 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/30 20:42:10 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_input(char *input);
int		ft_valid(char *input);
int		ft_th_one(char *input);
void	ft_write_error(void);

int	ft_check_input(char *input)
{
	int	i;

	i = 0;
	if (!ft_valid(input) || !ft_th_one(input))// if the input is not well written, we send an Error message
		return (0);
	return (1);//return 1 if everything is good. We can go on.
}

int	ft_valid(char *input)//we check if every digits are well written
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if ((input[i] < '1' || input[i] > '4') && input[i] != ' ')//if not, we send an Error message
		{
			ft_write_error();
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_th_one(char *input)//function to see if the input has not cheats/errors within his formats
{
	int	i;
	int	check;

	i = 0;
	check = 1;//check = 1 for saying that is okay
	while (input[i + 1] != '\0')
	{
		if ((input[i] == ' ' && input[i + 1] == ' ')//condition to see if there is 2 consecutive space or digits
			|| ((input[i] > '0' && input[i] < '5')
				&& (input[i + 1] > '0' && input[i + 1] < '5')))
			check = 0;// check is not okay
		i++;
	}
	if (i != 30)//we check if the input has the good length
		check = 0;
	if (!check)//if not, we write an Error message <=> if check == 0 
	{
		ft_write_error();
		return (check);
	}
	return (check);
}

void	ft_write_error(void)//function for error message
{
	write(1, "Error\n", 6);
}
