# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2525.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 22:58:49 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/01 23:13:51 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

hour, minute = map(int, input().split())
duration = int(input())

minute += duration
hour += minute // 60
minute %= 60
hour %= 24

print(hour, minute)
