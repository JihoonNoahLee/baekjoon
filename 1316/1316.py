# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1316.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 23:55:25 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/23 23:55:26 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

word_count = int(input())
words_lst = [input() for _ in range(word_count)]
groupword_cnt = 0

for word in words_lst:
	if (list(word) == sorted(word, key=word.find)):
		groupword_cnt += 1

print(groupword_cnt)
