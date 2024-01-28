/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:03:37 by mvallhon          #+#    #+#             */
/*   Updated: 2023/11/08 13:24:37 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	calc(char *nums, char *dic);
void	put_space(char *nums);
void	ft_read(char *name_archivo, char *nb);
void	exception_one_digit(char *nums, char *dic);
void	exceptions_two_digits(int str_len, char *dic);

void	handle_three_digits(char *nums, char *dic)
{
	char	res[2];

	if (*nums != '0')
	{
		res[0] = *nums;//
		res[1] = '\0';
		ft_read(dic, res);//enviamos el numero que sea
		ft_read(dic, "100");// we write hundreds
		exception_one_digit(nums, dic);//que pasa cuando los demas son unicamentes 0 => enviamos el nombre que es 
	}
	calc(nums + 1, dic);
}

void	handle_two_digits(char *nums, char *dic, char *decimal, int str_len)
{
	if (nums[0] == '1')//entre 1-19
	{
		decimal[0] = '1';
		decimal[1] = nums[1];
		decimal[2] = '\0';
		ft_read(dic, decimal);
		exceptions_two_digits(str_len, dic);
		calc(nums + 2, dic);
	}
	else if (*nums == '0')//if the second numbers is 0, we want to say 'and'. it depends 
	{
		if (nums[1] != '0')
			write(1, "and ", 4);
		calc(nums + 1, dic);
	}
	else//otherwise we write '-'
	{
		decimal[0] = nums[0];
		decimal[1] = '0';
		decimal[2] = '\0';
		ft_read(dic, decimal);
		if (nums[1] != '0')
			write(1, "-", 1);
		calc(nums + 1, dic);//we go to next number                       
	}
}

void	handle_one_digit(char *nums, char *dic, int str_len)
{
	char	res[2];

	if (*nums != '0')
	{
		res[0] = *nums;//char in string
		res[1] = '\0';//terminamos y no hay siguiente
		ft_read(dic, res);
		if (str_len == 4)
			ft_read(dic, "1000");//imprimimos el nombre del numero 
		else if (str_len == 7)
			ft_read(dic, "1000000");
		else if (str_len == 10)
			ft_read(dic, "1000000000");
	}
	if (str_len > 3)//si on est au un bail superieur que 999, on rappelle la fonction , sinon nan
		calc(nums + 1, dic);
}

void	calc(char *nums, char *dic)
{
	int		str_len;
	char	decimal[3];

	str_len = 0;
	if (*nums == '\0')
		return ;
	while (nums[str_len])
		str_len++;
	if (str_len % 3 == 0)
	{
		handle_three_digits(nums, dic);
	}
	else if (str_len % 3 == 2)
	{
		handle_two_digits(nums, dic, decimal, str_len);
	}
	else
	{
		handle_one_digit(nums, dic, str_len);
	}
}
/*
int	main(int argc, char *argv[])
{
	calc(argv[1], "numbers.dict");
	return (0);
}*/
