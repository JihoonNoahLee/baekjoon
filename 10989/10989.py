# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10989.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 19:52:26 by jihoolee          #+#    #+#              #
#    Updated: 2021/11/25 20:13:12 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys

count_lst = [0] * 10000

input()
for input_num in sys.stdin:
	count_lst[int(input_num) - 1] += 1

for num in range(1, 10000 + 1):
	for _ in range(count_lst[num - 1]):
		print(num)
