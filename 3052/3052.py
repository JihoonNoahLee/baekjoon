# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    3052.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:36:46 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:36:47 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

input_lst = [int(input()) for _ in range(10)]
mod_dict = {}
for num in input_lst:
	mod = num % 42
	if (mod not in mod_dict): mod_dict[mod] = 1
print(len(mod_dict))
