# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10870.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 20:01:40 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/07 20:02:36 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def fibonacci(num):
	if (num == 0):
		return (0)
	elif (num == 1):
		return (1)
	else:
		return (fibonacci(num - 1) + fibonacci(num - 2))

num = int(input())

print(fibonacci(num))
