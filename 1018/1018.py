# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1018.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/16 19:29:11 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/16 21:59:52 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def repaint_board(i0, j0, corner):
	to_repaint = 0
	other_color = chr(ord('W') + ord('B') - ord(corner))
	for i in range(8):
		for j in range (8):
			if (((i + j) % 2 == 0 and board[i + i0][j + j0] != corner)
				or ((i + j) % 2 == 1 and board[i + i0][j + j0] != other_color)):
				to_repaint += 1
	return (to_repaint)

row, col = map(int, input().split())
board = [list(input()) for _ in range(row)]

paint_num_lst = [min(repaint_board(i, j, 'W'), repaint_board(i, j, 'B'))
					for j in range(col - 8 + 1) for i in range(row - 8 + 1)]
print(min(paint_num_lst))
