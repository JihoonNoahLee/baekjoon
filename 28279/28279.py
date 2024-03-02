# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    28279.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 15:42:04 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/02 16:04:58 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys
from collections import deque


input = sys.stdin.readline


class Deque(deque):
    def __init__(self):
        super().__init__()

    def popleft(self) -> int:
        if len(self) == 0:
            return -1
        return super().popleft()

    def pop(self) -> int:
        if len(self) == 0:
            return -1
        return super().pop()

    def left(self) -> int:
        if len(self) == 0:
            return -1
        return self[0]

    def right(self) -> int:
        if len(self) == 0:
            return -1
        return self[-1]


def main() -> None:
    d: Deque = Deque()

    for _ in range(int(input())):
        cmd: list[int] = list(map(int, input().split()))

        if cmd[0] == 1:
            d.appendleft(cmd[1])
        elif cmd[0] == 2:
            d.append(cmd[1])
        elif cmd[0] == 3:
            print(d.popleft())
        elif cmd[0] == 4:
            print(d.pop())
        elif cmd[0] == 5:
            print(len(d))
        elif cmd[0] == 6:
            print(int(len(d) == 0))
        elif cmd[0] == 7:
            print(d.left())
        elif cmd[0] == 8:
            print(d.right())


if __name__ == '__main__':
    main()
