# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2346.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 12:46:05 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/03 13:24:04 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from collections import deque


def rotate_deque(d: deque, rotation: int):
    if rotation > 0:
        for _ in range(rotation - 1):
            d.append(d.popleft())
    else:
        for _ in range(-rotation):
            d.appendleft(d.pop())


def main() -> None:
    _ = input()
    nums: deque = deque(list(enumerate(map(int, input().split()))))
    result: list[int] = []

    while True:
        result.append(nums[0][0] + 1)
        rotation: int = nums[0][1]
        nums.popleft()
        if len(nums) == 0:
            break
        rotate_deque(nums, rotation)
    print(*result)


if __name__ == '__main__':
    main()
