# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    5622.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:39:22 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:39:23 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_score(c):
	if (c < 'S'):
		numpad = (ord(c) - ord('A')) // 3
	elif (c >= 'S' and c < 'Z'):
		numpad = (ord(c) - ord('A') - 1) // 3
	else:
		numpad = 7
	return (numpad + 3)


word_lst = list(input())

print(sum(list(map(get_score, word_lst))))
