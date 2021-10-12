# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    7568.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 16:48:19 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/12 17:04:05 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_bulk_rank(idx, w_h_lst):
	bigger = 0
	for weight, height in w_h_lst:
		if (weight > w_h_lst[idx][0] and height > w_h_lst[idx][1]):
			bigger += 1
	return (bigger + 1)

cases = int(input())
weight_height_lst = [list(map(int, input().split())) for _ in range(cases)]

bulk_rank = [get_bulk_rank(i, weight_height_lst) for i in range(cases)]
print(*bulk_rank)
