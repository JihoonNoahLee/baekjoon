# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10250.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 15:09:49 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/28 15:54:13 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_suitable_room(max_floor, max_room, guest_num):
	floor = guest_num % max_floor
	room = guest_num // max_floor + 1
	if (floor == 0):
		floor = max_floor
		room -= 1
	return (floor * 100 + room)


cases = int(input())
inputs_lst = [tuple(map(int, input().split())) for _ in range(cases)]

for case in inputs_lst:
	print(get_suitable_room(*case))
