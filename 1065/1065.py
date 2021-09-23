# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1065.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 23:49:34 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/23 23:50:03 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def is_hansoo(i):
	diffs = {}
	while (i >= 10):
		diff = i % 10 - (i // 10 % 10)
		if (diff not in diffs): diffs[diff] = 1
		if (len(diffs) > 1): return (False)
		i //= 10
	return True

def get_hansoo_num(num):
	han_list = [i for i in range(1, num + 1) if is_hansoo(i) == True]
	return (len(han_list))

num = int(input())
print(get_hansoo_num(num))
