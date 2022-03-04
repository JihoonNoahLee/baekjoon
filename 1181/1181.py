# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1181.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 14:27:48 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/04 14:32:43 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

length = int(input())
words = set(input() for _ in range (length))

sorted_words = sorted(words, key=lambda x: (len(x), x))
for word in sorted_words:
    print(word)
