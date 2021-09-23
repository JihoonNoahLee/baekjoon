# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2562.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 00:05:52 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/24 00:06:21 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

input_lst = list(int(input()) for _ in range(9))
max_val = max(input_lst)
print(max_val)
print(input_lst.index(max_val) + 1)
