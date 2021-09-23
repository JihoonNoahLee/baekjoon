# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1712.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 23:59:14 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/23 23:59:36 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

A, B, C = map(int, input().split())

if (C <= B):
	break_even_point = -1
else:
	break_even_point = A // (C - B) + 1

print(break_even_point)
