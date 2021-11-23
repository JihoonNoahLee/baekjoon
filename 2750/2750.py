# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2750.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 16:29:34 by jihoolee          #+#    #+#              #
#    Updated: 2021/11/23 16:34:45 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def bubble_sort(lst):
	length = len(lst)
	for i in range(length):
		for j in range(i + 1, length):
			if (lst[i] > lst[j]):
				temp = lst[j]
				lst[j] = lst[i]
				lst[i] = temp

input_len = int(input())
lst = [int(input()) for i in range(input_len)]

bubble_sort(lst)
for i in range(input_len):
	print(lst[i])
