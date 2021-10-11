# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2798.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 15:00:11 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/11 15:03:18 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cards_num, goal = map(int, input().split())
all_cards = list(map(int, input().split()))

max = 0
for i in range(0, cards_num - 2):
	for j in range(i + 1, cards_num - 1):
		for k in range(j + 1, cards_num):
			sum = all_cards[i] + all_cards[j] + all_cards[k]
			if (sum <= goal and sum > max):
				max = sum
print(max)
