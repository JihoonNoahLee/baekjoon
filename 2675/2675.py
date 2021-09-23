# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2675.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 00:08:54 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/24 00:08:58 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

inputs_num = int(input())
input_strs_lst = [input().split(' ') for _ in range(inputs_num)]

for input_lst in input_strs_lst:
	string = ""
	for c in input_lst[1]:
		string += c * int(input_lst[0])
	print(string)
