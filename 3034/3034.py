# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    3034.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 22:23:42 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/17 22:29:20 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from math import sqrt

def get_diag_len(w, h):
    return w ** 2 + h ** 2

def main():
    match_cnt, w, h = map(int, input().split())

    max_len = sqrt(w ** 2 + h ** 2)
    for _ in range(match_cnt):
        match_len = int(input())
        if (match_len > max_len):
            print('NE')
        else:
            print('DA')

if (__name__ == '__main__'):
    main();
