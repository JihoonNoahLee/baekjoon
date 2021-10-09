# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11729.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 21:00:20 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/09 21:04:30 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def hanoi(height, src, dst):
	waypoint = 6 - src - dst
	if (height == 1):
		opers.append([src, dst])
		return ;
	hanoi(height - 1, src, waypoint)
	hanoi(1, src, dst)
	hanoi(height - 1, waypoint, dst)

height = int(input())

opers = []
hanoi(height, 1, 3)
print(len(opers))
for oper in opers:
	print(oper[0], oper[1])
