# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1920.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 14:57:54 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/18 15:03:00 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys


input = sys.stdin.readline


def main() -> None:
    _ = input()
    set_: set[int] = set(map(int, input().split()))
    _ = input()
    for num in map(int, input().split()):
        if num in set_:
            print(1)
        else:
            print(0)



if __name__ == '__main__':
    main()
