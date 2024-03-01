# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    12789.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 20:27:07 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/01 21:13:40 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from collections import deque


class Stack():
    def __init__(self):
        self.container: list[int] = []

    def push(self, elem: int) -> None:
        self.container.append(elem)

    def pop(self) -> int:
        if (self.empty()):
            raise IndexError('pop from empty Stack')
        return self.container.pop()

    def empty(self) -> bool:
        return len(self.container) == 0

    def top(self) -> int:
        if (self.empty()):
            raise IndexError('top from empty Stack')
        return self.container[-1]


class Queue():
    def __init__(self):
        self.container: deque[int] = deque()

    def push(self, elem: int) -> None:
        self.container.append(elem)

    def pop(self) -> int:
        if (self.empty()):
            raise IndexError('pop from empty Queue')
        return self.container.popleft()

    def empty(self) -> bool:
        return len(self.container) == 0

    def front(self) -> int:
        if (self.empty()):
            raise IndexError('top from emptuy Queue')
        return self.container[0]


def is_possible(s: Stack, q: Queue) -> bool:
    turn: int = 1

    while (not q.empty()):
        if not s.empty():
            while (not s.empty() and s.top() == turn):
                s.pop()
                turn += 1
        if q.front() == turn:
            q.pop()
            turn += 1
        else:
            s.push(q.pop())
    while (not s.empty() and s.top() == turn):
        s.pop()
        turn += 1
    return s.empty()


def main() -> None:
    s: Stack = Stack()
    q: Queue = Queue()

    _ = input()
    for num in map(int, input().split()):
        q.push(num)
    print('Nice' if is_possible(s, q) else 'Sad')


if __name__ == '__main__':
    main()
