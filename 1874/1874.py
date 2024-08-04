# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1874.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 15:10:05 by jihoolee          #+#    #+#              #
#    Updated: 2024/08/04 15:25:21 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from collections import deque


def format_by_stack(nums: list[int]) -> list[str]:
    stack: deque[int] = deque()
    operations: list[str] = []
    new_num: int = 1

    for num in nums:
        while len(stack) == 0 or stack[-1] != num:
            if new_num > len(nums):
                return []
            stack.append(new_num)
            new_num += 1
            operations.append('+')
        stack.pop()
        operations.append('-')
    return operations


def main() -> None:
    nums: list[int] = [int(input()) for _ in range(int(input()))]
    operations: list[str] = format_by_stack(nums)
    if not operations:
        print('NO')
    else:
        print(*operations, sep='\n')


if __name__ == '__main__':
    main()
