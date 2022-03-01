# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2480.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 23:40:48 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/01 23:50:28 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

a, b, c = map(int, input().split())

if (a == b and b == c): result = 10000 + a * 1000
elif (a != b and b != c and c != a): result = 100 * max(a, b, c)
else:
    if (a == b): result = 1000 + a * 100
    elif (b == c): result = 1000 + b * 100
    elif (c == a): result = 1000 + c * 100
print(result)
