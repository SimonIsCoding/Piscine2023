/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_space.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:40:45 by mvallhon          #+#    #+#             */
/*   Updated: 2023/11/08 13:26:47 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_read(char *name_archivo, char *nb);

void	put_space(char *nums)
{
	int	i;

	i = 0;
	while (nums[i] != '\0')
	{
		if (nums[i] != '0')
			write(1, " ", 1);
		i++;
	}
}

void	exception_one_digit(char *nums, char	*dic)//should be exception three digits
{
	int	i;//si despues hay 0 son excepciones

	i = 1;
	while (nums[i] == '0')
		i++;
	if (i == 6)
		ft_read(dic, "1000");
	else if (i == 9)
		ft_read(dic, "1000000");
	else if (i == 12)
		ft_read(dic, "1000000000");
}

void	exceptions_two_digits(int str_len, char *dic)//los demass son 0 hay excepciones
{
	if (str_len == 5)
		ft_read(dic, "1000");
	else if (str_len == 8)
		ft_read(dic, "1000000");
	else if (str_len == 11)
		ft_read(dic, "1000000000");
}
