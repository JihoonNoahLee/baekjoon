# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    9020.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 19:37:54 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/07 19:48:52 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def eratos(max):
	is_prime = [True] * (max + 1)
	for i in range(2, max + 1):
		if (is_prime[i] == True):
			for j in range(2 * i, max + 1, i):
				is_prime[j] = False
	return ([i for i in range(2, max) if is_prime[i] == True])

def get_goldbach(num):
	smaller = int(num / 2)
	while (smaller not in prime_nums_lst or num - smaller not in prime_nums_lst):
		smaller -= 1
	return (smaller, num - smaller)

cases = int(input())

prime_nums_lst = eratos(10000)
for _ in range(cases):
	 num = int(input())
	 print(*get_goldbach(num))
