# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11650.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 23:22:53 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/02 23:29:09 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

length = int(input())
coords = [list(map(int, input().split())) for _ in range(length)]

result = sorted(coords)
for coord in result:
    print(coord[0], coord[1])
