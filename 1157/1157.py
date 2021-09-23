# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1157.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 23:53:34 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/23 23:53:35 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

alpha_freq_lst = [0 for i in range(26)]
word = input().upper()

for c in word:
	alpha_freq_lst[ord(c) - ord('A')] += 1
result = chr(alpha_freq_lst.index(max(alpha_freq_lst)) + ord('A'))

alpha_freq_lst.sort(reverse=True)
if (alpha_freq_lst[0] == alpha_freq_lst[1]):
	print('?')
else:
	print(result)
