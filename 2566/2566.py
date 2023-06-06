# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2566.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 17:12:04 by jihoolee          #+#    #+#              #
#    Updated: 2023/06/06 17:41:38 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SIZE = 9


def main():
    mat = [list(map(int, input().split())) for _ in range(SIZE)]
    max_val = float('-inf')
    max_row = 1
    max_col = 1
    for row_mat in mat:
        max_in_row = max(row_mat)
        if (max_in_row > max_val):
            max_val = max_in_row
            max_row = mat.index(row_mat) + 1
            max_col = row_mat.index(max_val) + 1
    print(max_val)
    print(max_row, max_col)


if (__name__ == '__main__'):
    main()
