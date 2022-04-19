# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    23971.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 13:35:52 by jihoolee          #+#    #+#              #
#    Updated: 2022/04/19 13:37:50 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from math import ceil

H, W, N, M = map(int, input().split())

def get_max_people(H, W, N, M):
    return ceil(H / (N + 1)) * ceil(W / (M + 1))

if (__name__ == '__main__'):
    print(get_max_people(H, W, N, M))
