# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1004.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 11:58:03 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/06 12:46:27 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def square(num):
    return num * num

def in_circle(x1, y1, x2, y2, radius):
    return ((square(x1 - x2) + square(y1 - y2)) < square(radius))

def get_crossings():
    src_x, src_y, dest_x, dest_y = map(int, input().split())
    cases = int(input())
    result = 0
    for _ in range(cases):
        planet_center_x, planet_center_y, radius = map(int, input().split())
        if (in_circle(src_x, src_y, planet_center_x, planet_center_y, radius)
            != in_circle(dest_x, dest_y, planet_center_x, planet_center_y, radius)):
            result += 1
    return result

def main():
    inputs = int(input())
    for _ in range(inputs):
        print(get_crossings())

if (__name__ == '__main__'):
    main()
