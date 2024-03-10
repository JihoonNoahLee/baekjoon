# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    24511.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 11:00:20 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/10 12:32:07 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys
from collections import deque

input = sys.stdin.readline


def main() -> None:
    _ = input()
    s_q: list[int] = list(map(int, input().split()))
    init_elem: list[int] = list(map(int, input().split()))
    _ = input()
    elems: list[int] = list(map(int, input().split()))

    qs: deque[int] = deque()
    for is_stack, elem in zip(s_q, init_elem):
        if not is_stack:
            qs.appendleft(elem)
    for elem in elems:
        qs.append(elem)
        print(qs.popleft(), end=' ')


if __name__ == '__main__':
    main()
