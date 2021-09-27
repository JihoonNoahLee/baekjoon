# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2775.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 16:06:13 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 16:42:36 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_people_num(floor, room_num):
	apt = [list(range(1, room_num + 1))]
	for _ in range(1, floor + 1):
		curr_floor = []
		for n in range(1, room_num + 1):
			curr_floor.append(sum(apt[-1][0: n]))
		apt.append(curr_floor)
	return (apt[-1][-1])

result = []

for _ in range(int(input())):
	k = int(input())
	n = int(input())
	result.append(get_people_num(k, n))

for i in result:
	print(i)
