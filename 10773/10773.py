# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10773.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 14:36:55 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/18 14:40:45 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys


input = sys.stdin.readline


def main() -> None:
    l: list[int] = []

    for _ in range(int(input())):
        num = int(input())
        if (num) == 0:
            l.pop()
        else:
            l.append(num)
    print(sum(l))


if __name__ == '__main__':
    main()
