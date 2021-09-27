# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    4673.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:38:36 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:38:37 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_selfnums_lst(num):
	result = []
	for i in range(1, num):
		temp = i + sum(map(int, list(str(i))))
		if (temp <= num):
			result.append(temp)
	return (result)

selfnums_lst = get_selfnums_lst(10000)

for i in range(1, 10000 + 1):
	if (i not in selfnums_lst and i <= selfnums_lst[-1]):
		print(i)
