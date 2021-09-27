# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10818.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:48:52 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:48:53 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

input_len = int(input())
input_lst = list(map(int, input().split(' ')))
print(min(input_lst), max(input_lst))
