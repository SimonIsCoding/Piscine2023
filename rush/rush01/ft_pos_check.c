/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:34:30 by jsala             #+#    #+#             */
/*   Updated: 2023/10/31 16:12:24 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chk_ucol(int pos_x, int board[4][4], int out_val[4][4])//we check the upper input - pos_x is the value of x
{
	int	n;
	int	t_col_max_h; //temporary column maximum height
	int	t_col_vis; //variable to check the visibility of the building

	n = 0;
	t_col_max_h = 0; //
	t_col_vis = 0; //
	while (n < 4 && board[n][pos_x] != 0) // n is the matrice size for the lines // loop to see the visibility of the outside input
	{
		if (t_col_max_h < board[n][pos_x]) // if t_col_max_h < 4
		{
			t_col_max_h = board[n][pos_x];
			t_col_vis++;//+1 because we see one more building
		}
		n++;
	}
	if (t_col_vis > out_val[0][pos_x])//is the visibility that we got is uppper than we input value, it was not well completed
		return (0);
	return (1);//if everything is all rigth
}

int	ft_chk_dcol(int pos_x, int board[4][4], int out_val[4][4]) //function to check the downside parameters 
{
	int	n;
	int	t_col_max_h;
	int	t_col_vis;

	n = 3;
	t_col_max_h = 0;
	t_col_vis = 0;
	while (n >= 0)
	{
		if (t_col_max_h < board[n][pos_x])//we start from the downside
		{
			t_col_max_h = board[n][pos_x];
			t_col_vis++;
		}
		n--;//we -1 to go upper
	}
	if (t_col_vis > out_val[1][pos_x])
		return (0);
	return (1);
}

int	ft_chk_lrow(int pos_y, int board[4][4], int out_val[4][4])
{
	int	n;
	int	t_row_max_h;
	int	t_row_vis;

	n = 0;
	t_row_max_h = 0;
	t_row_vis = 0;
	while (n < 4 && board[pos_y][n] != 0)//as long as we are editing the matrix and the matrix is different from 0 => we want to change the values
	{
		if (t_row_max_h < board[pos_y][n])
		{
			t_row_max_h = board[pos_y][n];
			t_row_vis++;
		}
		n++;
	}
	if (t_row_vis > out_val[2][pos_y])
		return (0);
	return (1);
}

int	ft_chk_rrow(int pos_y, int board[4][4], int out_val[4][4])
{
	int	n;
	int	t_row_max_h;
	int	t_row_vis;

	n = 3;
	t_row_max_h = 0;
	t_row_vis = 0;
	while (n >= 0)
	{
		if (t_row_max_h < board[pos_y][n])
		{
			t_row_max_h = board[pos_y][n];
			t_row_vis++;
		}
		n--;
	}
	if (t_row_vis > out_val[3][pos_y])
		return (0);
	return (1);
}
