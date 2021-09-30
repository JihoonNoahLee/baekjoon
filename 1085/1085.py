# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1085.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 15:50:56 by jihoolee          #+#    #+#              #
#    Updated: 2021/09/30 15:52:59 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

curr_x, curr_y, edge_x, edge_y = map(int, input().split())

print(min(curr_x, curr_y, edge_x - curr_x, edge_y - curr_y))
