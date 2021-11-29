# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2108.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 15:48:47 by jihoolee          #+#    #+#              #
#    Updated: 2021/11/29 16:12:52 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys
from collections import Counter

def max_freq_val(lst):
	freq_cnt = Counter(lst).most_common()
	if (len(freq_cnt) > 1 and freq_cnt[0][1] == freq_cnt[1][1]):
		return (freq_cnt[1][0])
	return (freq_cnt[0][0])

max_abs = 4000
lst_len = int(sys.stdin.readline())
lst = sorted([int(sys.stdin.readline()) for _ in range(lst_len)])

print(round(sum(lst) / lst_len))
print(lst[lst_len // 2])
print(max_freq_val(lst))
print(lst[-1] - lst[0])
