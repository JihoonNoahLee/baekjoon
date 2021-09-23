# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1193.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 23:54:26 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/23 23:54:27 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

num = int(input())

diag = 1;
while (num > diag):
	num -= diag
	diag += 1

if (diag % 2 == 0):
	row = num
	col = diag + 1 - num;
else:
	row = diag + 1 - num;
	col = num;

print('{0}/{1}'.format(row, col))
