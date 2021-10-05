# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    3053.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 16:08:40 by jihoolee          #+#    #+#              #
#    Updated: 2021/10/05 16:23:46 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from math import pi

r = int(input())
euclid_area = r ** 2 * pi
taxi_area = r ** 2 * 2
print(euclid_area)
print(taxi_area)
