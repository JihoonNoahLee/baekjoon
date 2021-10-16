/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1018.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:05:10 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/16 21:44:59 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string>	board;

int	repaint_board(int i0, int j0, char corner)
{
	int		to_repaint = 0;
	char	other_color = 'W' + 'B' - corner;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (((i + j) % 2 == 0 && board[i + i0][j + j0] != corner)
				|| ((i + j) % 2 == 1 && board[i + i0][j + j0] != other_color))
				to_repaint++;
		}
	}
	return (to_repaint);
}

int	get_min_repaint(int row, int col)
{
	int	min = 64;
	int	to_repaint_w;
	int	to_repaint_b;

	for (int i = 8; i <= row; i++)
	{
		for (int j = 8; j <= col; j++)
		{
			to_repaint_b = repaint_board(i - 8, j - 8, 'B');
			if (to_repaint_b < min)
				min = to_repaint_b;
			to_repaint_w = repaint_board(i - 8, j - 8, 'W');
			if (to_repaint_w < min)
				min = to_repaint_w;
		}
	}
	return (min);
}

void	init_board(int row, int col)
{
	board.resize(row);
	for (int i = 0; i < row; i++)
		cin >> board[i];
}

int	main(void)
{
	int	row, col;

	cin >> row >> col;
	init_board(row, col);
	cout << get_min_repaint(row, col);
	return (0);
}
