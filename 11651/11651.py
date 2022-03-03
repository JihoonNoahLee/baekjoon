# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11651.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 23:24:03 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/03 23:37:22 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

length = int(input())
coords = [list(map(int, input().split())) for _ in range(length)]

sorted_coords = sorted(coords, key=lambda coord: (coord[1], coord[0]))
for coord in sorted_coords:
    print(coord[0], coord[1])
