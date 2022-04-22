# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    16255.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 15:43:56 by jihoolee          #+#    #+#              #
#    Updated: 2022/04/22 16:05:33 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_min_ballcount(param):
    k = param[0]
    bigger = max(param[1:])
    smaller = min(param[1:])

    if (bigger >= k):
        return 2 - (bigger - smaller)
    elif (smaller + 2 >= k):
        return smaller + 2 - bigger
    else:
        return k - bigger

n_cases = int(input())
games_lst = [list(map(int, input().split())) for _ in range(n_cases)]
results = list(map(get_min_ballcount, games_lst))

for result in results:
    print(result)
