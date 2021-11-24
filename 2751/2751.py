# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2751.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 15:27:25 by jihoolee          #+#    #+#              #
#    Updated: 2021/11/24 15:33:57 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys

lst_len = int(input())
lst = [int(sys.stdin.readline()) for i in range(lst_len)]

lst.sort()
for i in range(lst_len):
	sys.stdout.write(str(lst[i]) + '\n')
