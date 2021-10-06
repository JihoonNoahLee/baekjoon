# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1002.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 15:26:43 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/06 15:49:45 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cases = int(input())

def calc_inter_num(dsquare, r1, r2):
	if (dsquare == 0 and r1 == r2):
		return (-1)
	elif (dsquare == (r1 + r2) ** 2 or dsquare == (r1 - r2) ** 2):
		return (1)
	elif (dsquare < (r1 - r2) ** 2 or dsquare > (r1 + r2) ** 2):
		return (0)
	elif (dsquare < (r1 + r2) ** 2):
		return (2)
	else:
		return (-2)

for _  in range(cases):
	x1, y1, r1, x2, y2, r2 = map(int, input().split())
	print(calc_inter_num((x2 - x1) ** 2 + (y2 - y1) ** 2, r1, r2))
