# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    28278.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 15:20:06 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/17 16:49:09 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys


class Stack:
    def __init__(self):
        self.container: list[int] = []
        self.size: int = 0

    def push(self, num: int) -> None:
        self.container.append(num)
        self.size += 1

    def pop(self) -> int:
        if (self.empty()):
            return -1
        result: int = self.container.pop()
        self.size -= 1
        return result

    def empty(self) -> bool:
        if (self.size == 0):
            return True
        else:
            return False

    def top(self) -> int:
        if (self.empty()):
            return -1
        return self.container[-1]


def main() -> None:
    s: Stack = Stack()

    for _ in range(int(input())):
        cmd: list[int] = list(map(int, sys.stdin.readline().strip().split()))

        if cmd[0] == 1:
            s.push(cmd[1])
        elif cmd[0] == 2:
            print(s.pop())
        elif cmd[0] == 3:
            print(s.size)
        elif cmd[0] == 4:
            print(int(s.empty()))
        elif cmd[0] == 5:
            print(s.top())
        else:
            raise ValueError('Command can must be number between 1-5')


if __name__ == '__main__':
    main()
