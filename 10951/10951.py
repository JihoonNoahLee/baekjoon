# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10951.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 14:52:33 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/27 14:52:36 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

while (True):
    try:
        a, b = map(int, input().split())
        print(a + b)
    except:
        break
