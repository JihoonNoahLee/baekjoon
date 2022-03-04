# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    18870.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 21:38:22 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/04 21:53:28 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

length = int(input())
inputs = list(map(int, input().split()))

nums_sorted = sorted(set(inputs))
index_dict = {nums_sorted[i] : i for i in range(len(nums_sorted))}
for num in inputs:
    print(index_dict[num], end = ' ')
