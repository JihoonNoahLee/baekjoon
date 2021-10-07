# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10872.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 19:52:54 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/07 19:54:26 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def factorial(num):
	if (num == 0 or num == 1):
		return (1)
	return (num * factorial(num - 1))

num = int(input())

print(factorial(num))
