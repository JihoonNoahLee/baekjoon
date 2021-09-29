# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1011.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 22:54:23 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/29 23:10:59 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import math

cases = int(input())
dist_lst = list(map(
			lambda l: l[1] - l[0],
			[list(map(int, input().split())) for _ in range(cases)]))

def get_steps(dist: int):
	max_len = math.floor(math.sqrt(dist))
	inbetween_steps = math.ceil((dist - math.pow(max_len, 2)) / max_len)
	return ((2 * max_len - 1) + inbetween_steps)


for dist in dist_lst:
	print(get_steps(dist))

