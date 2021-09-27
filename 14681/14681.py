# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    14681.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:59:42 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 15:00:54 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

x_coor = int(input())
y_coor = int(input())

if (x_coor > 0):
	if (y_coor > 0):
		quadrant = 1
	else:
		quadrant = 4
else:
	if (y_coor > 0):
		quadrant = 2
	else:
		quadrant = 3
print(quadrant)
