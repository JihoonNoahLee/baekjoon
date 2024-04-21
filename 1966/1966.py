# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1966.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 12:07:16 by jihoolee          #+#    #+#              #
#    Updated: 2024/04/21 12:17:34 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from collections import deque


def find_print_order(priorities: list[int], target_idx: int) -> int:
    queue: deque = deque([(idx, priority) for idx, priority
                          in enumerate(priorities)])
    count: int = 0

    while queue:
        doc = queue.popleft()
        if any(doc[1] < q_doc[1] for q_doc in queue):
            queue.append(doc)
        else:
            count += 1
            if doc[0] == target_idx:
                break
    return count


def main() -> None:
    for _ in range(int(input())):
        _, target_idx = map(int, input().split())
        priorities: list[int] = list(map(int, input().split()))
        print(find_print_order(priorities, target_idx))


if __name__ == '__main__':
    main()
