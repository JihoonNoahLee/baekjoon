# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    4948.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/01 22:04:27 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/05 15:55:00 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_primes(max):
	primes = [True] * (max + 1)
	primes[0] = False
	primes[1] = False
	iter_max = int(max ** 0.5) + 1
	for i in range(2, iter_max):
		if (primes[i] == True):
			for j in range(2 * i, max + 1, i):
				primes[j] = False
	return (primes)

is_prime = get_primes(123456 * 2)

while (True):
	num = int(input())
	if (num == 0):
		break
	prime_cnt = 0
	for i in range(num + 1, 2 * num + 1):
		if (is_prime[i] == True):
			prime_cnt += 1
	print(prime_cnt)
