# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2738.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 02:30:05 by jihoolee          #+#    #+#              #
#    Updated: 2023/06/04 21:28:21 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def print_mat(mat):
    for row in mat:
        print(*row)


def main():
    row, col = map(int, input().split())
    A = [list(map(int, input().split())) for _ in range(row)]
    B = [list(map(int, input().split())) for _ in range(row)]
    result = [[num1 + num2 for num1, num2 in zip(a, b)] for a, b in zip(A, B)]
    print_mat(result)


if (__name__ == '__main__'):
    main()
