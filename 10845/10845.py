# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10845.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 16:53:41 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/01 17:24:26 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys
from collections import deque

input = sys.stdin.readline


class Queue:
    def __init__(self):
        self.container: deque[int] = deque()

    def push(self, num: int) -> None:
        self.container.append(num)

    def pop(self) -> int:
        if (self.empty()):
            return -1
        return self.container.popleft()

    def size(self) -> int:
        return len(self.container)

    def empty(self) -> bool:
        return len(self.container) == 0

    def front(self) -> int:
        if (self.size() == 0):
            return -1
        return self.container[0]

    def back(self) -> int:
        if (self.size() == 0):
            return -1
        return self.container[-1]


def main() -> None:
    q: Queue = Queue()

    for _ in range(int(input())):
        cmd: list[str] = input().split()

        if cmd[0] == 'push':
            q.push(int(cmd[1]))
        elif cmd[0] == 'pop':
            print(q.pop())
        elif cmd[0] == 'size':
            print(q.size())
        elif cmd[0] == 'empty':
            print(int(q.empty()))
        elif cmd[0] == 'front':
            print(q.front())
        elif cmd[0] == 'back':
            print(q.back())


if __name__ == '__main__':
    main()
