# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11021.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:55:11 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:55:14 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

num = int(input())
for i in range(num):
	a, b = map(int, input().split())
	print('Case #', i + 1, ': ', a + b, sep='')
