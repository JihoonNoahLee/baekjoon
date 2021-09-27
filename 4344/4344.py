# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    4344.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:37:48 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:37:50 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_over_avg(scores_lst):
	over_avg_num = 0
	avg = sum(scores_lst) / len(scores_lst)
	for score in scores_lst:
		if (score > avg): over_avg_num += 1
	return (over_avg_num / len(scores_lst))

length = int(input())
classes_lst = [list(map(int, input().split(' '))) for _ in range(length)]

for scores_lst in classes_lst:
	scores_lst.pop(0)

over_avg_lst = [get_over_avg(scores_lst) for scores_lst in classes_lst]
for over_avg_rate in over_avg_lst:
	print('{0:.3f}%'.format(over_avg_rate * 100))
