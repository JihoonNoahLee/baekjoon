# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    15650.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 12:01:12 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/08 13:56:16 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

n, r = map(int, input().split())
permutation = []

def back_track(start):
    if (len(permutation) == r):
        print(*permutation)
        return
    for num in range(start, n + 1):
        if (num in permutation): continue
        permutation.append(num)
        back_track(num + 1)
        permutation.pop()

if (__name__ == '__main__'):
    back_track(1)
