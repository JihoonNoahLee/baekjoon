# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2577.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 00:07:11 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/24 00:07:12 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

num = 1
for _ in range (3):
	num *= int(input())

digits = [int(c) for c in str(num)]
digits_dict = {i : 0 for i in range (10)}

for digit in digits:
	if (digit in digits_dict): digits_dict[digit] += 1
	else : digits_dict[digit] = 0

for digit in digits_dict:
	print(digits_dict[digit])
