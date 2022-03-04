# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10814.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 18:27:24 by jihoolee          #+#    #+#              #
#    Updated: 2022/03/04 18:34:28 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

length = int(input())
people = [list(input().split()) for _ in range(length)]

sorted_people = sorted(people, key=lambda x: int(x[0]))
for person in sorted_people:
    print(*person)
