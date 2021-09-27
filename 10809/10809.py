# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10809.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:47:23 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:47:26 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

word = input()

word_dict = {char : -1 for char in [chr(i) for i in range(ord('a'), ord('z') + 1)]}

for c in word:
	if (word_dict[c] == -1):
		word_dict[c] = word.index(c)

result = ""
for c in word_dict:
	result += (str(word_dict[c]) + ' ')
print(result)
