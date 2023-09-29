# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    9063.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 02:37:17 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/30 02:44:56 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    input_cnt = int(input())
    coords = [list(map(int, input().split(' '))) for _ in range(input_cnt)]
    x_coords, y_coords = zip(*coords)
    print((max(x_coords) - min(x_coords)) * (max(y_coords) - min(y_coords)))


if (__name__ == '__main__'):
    main()
