# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2839.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 15:39:53 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/29 15:48:37 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

total_m = int(input())

bag_5 = total_m // 5
bag_3 = (total_m - bag_5 * 5) // 3
while (total_m != 5 * bag_5 + 3 * bag_3 and bag_5 >= 0):
	if (total_m > 5 * bag_5 + 3 * bag_3):
		bag_3 += 1
	elif (total_m < 5 * bag_5 + 3 * bag_3):
		bag_5 -= 1
		bag_3 = 0
if (bag_5 >= 0):
	print(bag_5 + bag_3)
else:
	print(-1)
