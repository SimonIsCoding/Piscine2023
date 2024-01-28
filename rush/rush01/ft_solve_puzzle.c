/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_puzzle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:44:21 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/31 17:26:40 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_pos_chk(int pos_x, int pos_y, int board[4][4], int out_val[4][4]);
int		ft_chk_lrow(int pos_y, int board[4][4], int out_val[4][4]);
int		ft_chk_rrow(int pos_y, int board[4][4], int out_val[4][4]);
int		ft_chk_ucol(int pos_x, int board[4][4], int out_val[4][4]);
int		ft_chk_dcol(int pos_x, int board[4][4], int out_val[4][4]);
int		ft_solve_pos(int pos_x, int pos_y, int board[4][4], int out_val[4][4]);
void	ft_write_error(void);
void	ft_print_sol(int board[4][4]);

void	ft_solve_puzzle(int board[4][4], int out_val[4][4])//out_val => user inputs value
{
	int	res;//result

	res = ft_solve_pos(0, 0, board, out_val);
	if (!res)
		ft_write_error();
}

int	ft_solve_pos(int pos_x, int pos_y, int board[4][4], int out_val[4][4])
{
	int		val;
	int		res;// What is res ?

	val = 1;
	if (pos_x + 4 * pos_y > 15)// what is the goal ? //Verify if every cells are different from 0 ?
	{
		ft_print_sol(board);
		return (1);// is good
	}
	while (val <= 4)//brut force ? // we want to complete the case with the good number if the condition is verified
	{
		board[pos_y][pos_x] = val;// we give the value val to the matrix's index.
		if (ft_pos_chk(pos_x, pos_y, board, out_val))//the number doesn't repeat in the same line & column & check the parameters => well written
		{
			if (pos_x == 3)// if we are at the end of the line ?
				res = ft_solve_pos(0, pos_y + 1, board, out_val);//we switch the line and we go next line || what is res ?
			else
				res = ft_solve_pos(pos_x + 1, pos_y, board, out_val); // otherwise, we go on the next column but in the same line (=x+1)
			if (res == 1)
				return (1);
		}
		board[pos_y][pos_x] = 0;
		val++;
	}
	return (0);
}

int	ft_pos_chk(int pos_x, int pos_y, int board[4][4], int out_val[4][4]r
{
	int	n;
	int	check;

	n = 0;
	check = 1;
	while (n < 4)
	{
		if (board[pos_y][pos_x] == board[pos_y][n] && pos_x != n)
			return (0);
		if (board[pos_y][pos_x] == board[n][pos_x] && pos_y != n)
			return (0);
		if (board[pos_y][n] != 0 && !ft_chk_lrow(pos_y, board, out_val))
			return (0);
		if (board[n][pos_x] != 0 && !ft_chk_ucol(pos_x, board, out_val))
			return (0);
		n++;
	}
	if (pos_y == 3 && !ft_chk_dcol(pos_x, board, out_val))
		return (0);
	if (pos_x == 3 && !ft_chk_rrow(pos_y, board, out_val))
		return (0);
	return (1);
}
