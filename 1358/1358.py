# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1358.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 13:01:32 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/07 13:20:02 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def is_in_circle(c_x, c_y, x, y, radius):
    if ((c_x - x) ** 2 + (c_y - y) ** 2 <= radius ** 2):
        return True
    return False

def is_in_left_semicircle(center_x, center_y, radius, player_x, plyaer_y):
    if (player_x <= center_x and is_in_circle(center_x, center_y, player_x, plyaer_y, radius)):
        return True
    return False



def is_in_right_semicircle(center_x, center_y, radius, player_x, player_y):
    if (player_x >= center_x and is_in_circle(center_x, center_y, player_x, player_y, radius)):
        return True
    return False

def is_in_rectangle(x, y, width, height, player_x, player_y):
    if ((player_x >= x and player_x <= x + width) and (player_y >= y and player_y <= y + height)):
        return True
    return False

def get_in_player_count(width ,height, x, y, player_cnt):
    inside_cnt = 0
    for _ in range(player_cnt):
        player_x, player_y = map(int, input().split())
        if (is_in_left_semicircle(x, y + height / 2, height / 2, player_x, player_y)
            or is_in_right_semicircle(x + width, y + height / 2, height / 2, player_x, player_y)
            or is_in_rectangle(x, y, width, height, player_x, player_y)):
            inside_cnt += 1
    return inside_cnt

def main():
    w, h, x, y, p = map(int, input().split())
    print(get_in_player_count(w, h, x, y, p))

if (__name__ == '__main__'):
    main()
