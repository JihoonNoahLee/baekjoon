# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    3009.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/01 01:23:15 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/01 01:44:27 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_least_occur(point_lst):
	for i in range(3):
		if (point_lst.count(point_lst[i]) == 1):
			return (point_lst[i])

x_lst = [0] * 3
y_lst = [0] * 3

for i in range(3):
	x_lst[i] , y_lst[i] = map(int, input().split())

x = get_least_occur(x_lst)
y = get_least_occur(y_lst)
print(x, y)

