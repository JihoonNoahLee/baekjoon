# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11022.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:57:33 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:57:34 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

num = int(input())
for i in range(num):
	a, b = map(int, input().split())
	print('Case #', i + 1, ': ', a, ' + ', b, ' = ', a + b, sep='')
