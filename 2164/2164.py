# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2164.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 21:42:25 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/01 21:51:22 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from collections import deque


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


def get_last_card(cards: Queue) -> int:
    while True:
        discarded: int = cards.pop()
        if (cards.empty()):
            break
        cards.push(cards.pop())
    return discarded


def main() -> None:
    card_cnt: int = int(input())
    cards: Queue = Queue()

    for num in range(1, card_cnt + 1):
        cards.push(num)
    print(get_last_card(cards))


if __name__ == '__main__':
    main()
