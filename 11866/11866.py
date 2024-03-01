# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11866.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 22:47:39 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/01 22:57:26 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from collections import deque


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


def get_josephus(n: int, k: int):
    q: Queue = Queue()
    josephus: list[int] = []

    for num in range(1, n + 1):
        q.push(num)
    while (not q.empty()):
        for _ in range(k - 1):
            q.push(q.pop())
        josephus.append(q.pop())
    return josephus


def main() -> None:
    n, k = map(int, input().split())
    print(f'<{", ".join(map(str, get_josephus(n, k)))}>')


if __name__ == '__main__':
    main()
