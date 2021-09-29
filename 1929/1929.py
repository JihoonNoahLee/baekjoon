# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1929.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 01:10:58 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/30 01:36:25 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

start, end = map(int, input().split())

def eratos(start, end):
	end += 1
	prime = [True for _ in range (end)]
	prime[1] = False
	range_end = int(end ** 0.5) + 1
	for i in range(2, range_end + 1):
		if (prime[i]):
			for j in range(2 * i, end, i):
				prime[j] = False
	return (prime)

primes_lst = eratos(start, end)
for i in range(start, end + 1):
	if (primes_lst[i] == True):
		print(i)
