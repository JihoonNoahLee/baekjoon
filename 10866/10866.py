# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10866.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 16:12:43 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/02 16:18:49 by jihoolee         ###   ########.fr        #
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
        cmd: list[str] = input().split()

        if cmd[0] == 'push_front':
            d.appendleft(int(cmd[1]))
        elif cmd[0] == 'push_back':
            d.append(int(cmd[1]))
        elif cmd[0] == 'pop_front':
            print(d.popleft())
        elif cmd[0] == 'pop_back':
            print(d.pop())
        elif cmd[0] == 'size':
            print(len(d))
        elif cmd[0] == 'empty':
            print(int(len(d) == 0))
        elif cmd[0] == 'front':
            print(d.left())
        elif cmd[0] == 'back':
            print(d.right())


if __name__ == '__main__':
    main()
