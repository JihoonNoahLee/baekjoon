# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    15649.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 22:05:33 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/07 22:16:18 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

n, r = map(int, input().split())
combs = []

def nCr(depth):
    if (depth == r):
        print(*combs)
        return
    for num in range(1, n + 1):
        if (num not in combs):
            combs.append(num)
            nCr(depth + 1)
            combs.pop()

if (__name__ == '__main__'):
    nCr(0)
