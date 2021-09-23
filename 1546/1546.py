# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1546.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 23:58:25 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/23 23:58:26 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_new_score(curr_score, max_score):
	return (curr_score / max_score * 100)

length = int(input())
scores_lst = list(map(int, input().split()))

new_scores_lst = [get_new_score(score, max(scores_lst)) for score in scores_lst]
new_avg = sum(new_scores_lst) / length
print(new_avg)
