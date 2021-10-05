# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    4946.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/01 22:04:27 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/01 22:58:17 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def is_prime(num):
	check_max = int(num ** 0.5)
	if (num == 1):
		return (False)
	for i in range(2, check_max + 1):
		if (num % i == 0):
			return (False)
	return (True)


while (True):
	num = int(input())
	if (num == 0):
		break
	prime_cnt = 0
	for i in range (num + 1, 2 * num + 1):
		if (is_prime(i)):
			prime_cnt += 1
	print(prime_cnt)
