# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1436.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 16:07:54 by jihoolee          #+#    #+#              #
#    Updated: 2021/11/23 16:14:44 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_nth_end(n):
	end_cnt = 1
	num = 666
	while (end_cnt != n):
		num += 1
		if ('666' in str(num)): end_cnt += 1
	return (num)

n = int(input())

print(get_nth_end(n))
