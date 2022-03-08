# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    15652.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 13:51:09 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/08 13:56:35 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

n, r = map(int, input().split())
permutatation = []

def back_track(start):
    if (len(permutatation) == r):
        print(*permutatation)
        return
    for num in range(start, n + 1):
        permutatation.append(num)
        back_track(num)
        permutatation.pop()

if (__name__ == '__main__'):
    back_track(1)
