# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2884.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:31:56 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:31:58 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

hour, minute = map(int, input().split())

if (minute < 45):
    minute = minute + 60 - 45
    if (hour == 0):
        hour = 23
    else:
        hour -= 1
else:
    minute = minute - 45
print(hour, minute)
