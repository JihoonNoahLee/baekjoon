# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2581.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 23:45:06 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/29 23:52:14 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

start = int(input())
end = int(input())

def is_prime(num: int):
	if (num == 1):
		return (False)
	for i in range(2, num):
		if (num % i == 0):
			return (False)
	return (True)

prime_num_lst = [num for num in range(start, end + 1) if is_prime(num)]
if (prime_num_lst == []):
	print(-1)
else:
	print(sum(prime_num_lst))
	print(min(prime_num_lst))
