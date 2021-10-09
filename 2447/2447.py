# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2447.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 16:45:54 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/09 17:53:13 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def form_square(size):
	if (size == 3):
		return (['***', '* *', '***'])
	else:
		chunk_1 = [row * 3 for row in form_square(size // 3)]
		chunk_2 = [row + ' ' * (size // 3) + row for row in form_square(size // 3)]
		return (chunk_1 + chunk_2 + chunk_1)

size = int(input())
square = form_square(size)

for chunk in square:
	print(chunk)
