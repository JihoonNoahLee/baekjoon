# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10871.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:50:26 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:50:31 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_, max_num = map(int, input().split())
nums = list(map(int, input().split()))
for num in nums:
	if (num < max_num) : print(num, end=' ')
