# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    15651.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 13:26:09 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/08 13:28:39 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

n, r = map(int, input().split())
rep_permutation = []

def nPir():
    if (len(rep_permutation) == r):
        print(*rep_permutation)
        return
    for num in range(1, n + 1):
        rep_permutation.append(num)
        nPir()
        rep_permutation.pop()

if (__name__ == '__main__'):
    nPir()
