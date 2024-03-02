# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10828.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 19:11:42 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/02 15:46:41 by jihoolee         ###   ########.fr        #
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
        cmd: list[str] = list(sys.stdin.readline().strip().split())

        if cmd[0] == 'push':
            s.push(int(cmd[1]))
        elif cmd[0] == 'pop':
            print(s.pop())
        elif cmd[0] == 'size':
            print(s.size)
        elif cmd[0] == 'empty':
            print(int(s.empty()))
        elif cmd[0] == 'top':
            print(s.top())
        else:
            raise ValueError('Command can must be number between 1-5')


if __name__ == '__main__':
    main()
