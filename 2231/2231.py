# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2231.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 15:30:59 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/11 15:35:38 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

num = int(input())

constructor = 0
for i in range(1, num):
	if (i + sum(map(int, list(str(i)))) == num):
		constructor = i
		break
print(constructor)
