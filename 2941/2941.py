# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2941.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:35:57 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:36:00 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

croatian_alpha_lst = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

word = input()
for c in croatian_alpha_lst:
	word = word.replace(c, '0')
print(len(word))
