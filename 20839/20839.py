# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    20839.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 15:04:47 by jihoolee          #+#    #+#              #
#    Updated: 2022/04/15 15:14:12 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

a, c, e = map(int, input().split())
grade_lst = list(map(int, input().split()))

def get_lettergrade(a, c, e, grade):
    if (grade[0] >= a and grade[1] >= c and grade[2] >= e):
        return 'A'
    elif (grade[0] >= a / 2 and grade[1] >= c and grade[2] >= e):
        return 'B'
    elif (grade[1] >= c and grade[2] >= e):
        return 'C'
    elif (grade[1] >= c / 2 and grade[2] >= e):
        return 'D'
    else:
        return 'E'

print(get_lettergrade(a, c, e, grade_lst))
