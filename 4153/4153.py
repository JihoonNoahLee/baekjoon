# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    4153.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 01:50:40 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/30 01:52:50 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

while (1):
	sides_lst = list(map(int, input().split()))
	if (sides_lst == [0, 0, 0]):
		break
	sides_lst.sort()
	if (sides_lst[2] ** 2 == sides_lst[1] ** 2 + sides_lst[0] ** 2):
		print('right')
	else:
		print('wrong')
