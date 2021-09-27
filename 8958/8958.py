# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    8958.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:41:06 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:41:06 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_score(scoreboard):
	total_score = 0
	score = 0
	for yn in scoreboard:
		if (yn == 'O'): score += 1
		else : score = 0
		total_score += score
	return (total_score)

case_num = int(input())
scoreboards_lst = [input() for _ in range(case_num)]

score_lst = [get_score(scoreboard) for scoreboard in scoreboards_lst]

for score in score_lst:
	print(score)
