# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1978.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 23:17:29 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/29 23:28:24 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cases = int(input())
nums_lst = list(map(int, input().split()))

def is_prime(num):
	if (num == 1):
		return (False)
	for i in range(2, num):
		if (num % i == 0):
			return (False)
	return (True)

print(len(list(filter(is_prime, nums_lst))))
