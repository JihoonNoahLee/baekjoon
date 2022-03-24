# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    9663.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 22:51:38 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/25 00:02:04 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

n = int(input())
board = [0] * n
possibilities = 0

def is_valid(depth, pos):
    for i in range(depth):
        if (pos == board[i] or abs(pos - board[i]) == depth - i):
            return False
    return True

def place_queens(depth):
    global possibilities

    if (depth == n):
        possibilities += 1
        return
    for pos in range(n):
        if (is_valid(depth, pos)):
            board[depth] = pos;
            place_queens(depth + 1)

place_queens(0)
print(possibilities)
