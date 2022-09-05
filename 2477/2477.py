# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2477.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 16:51:21 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/05 21:38:01 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_area(side_lengths):
    max_sides_idx = [side_lengths.index(max(side_lengths, key = lambda side: side[1]))]
    max_sides_idx.append(side_lengths.index(
                            max(side_lengths[(max_sides_idx[0] + 1) % 6],
                                side_lengths[max_sides_idx[0] - 1],
                                key = lambda side: side[1])))
    whole_area = side_lengths[max_sides_idx[0]][1] * side_lengths[max_sides_idx[1]][1]
    cutout_area = side_lengths[(max_sides_idx[0] + 3) % 6][1] * side_lengths[(max_sides_idx[1] + 3) % 6][1]
    return whole_area - cutout_area


def main():
    fruits_per_unit = int(input())
    side_lengths = [list(map(int, input().split())) for _ in range(6)]
    print(fruits_per_unit * get_area(side_lengths))

if (__name__ == '__main__'):
    main()
