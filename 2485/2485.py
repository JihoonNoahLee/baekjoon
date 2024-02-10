# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2485.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 00:09:14 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/11 00:09:15 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_gcd(num1: int, num2: int) -> int:
    if (num2 == 0):
        return num1
    return get_gcd(num2, num1 % num2)


def get_gcd_multiple(nums: list[int]) -> int:
    gcd: int = nums[0]

    for num in nums:
        gcd = get_gcd(gcd, num)
    return gcd


def main() -> None:
    trees: list[int] = [int(input()) for _ in range(int(input()))]
    tree_intervals: list[int] = [trees[idx + 1] - trees[idx]
                                 for idx in range(len(trees) - 1)]
    interval_gcd: int = get_gcd_multiple(tree_intervals)
    result: int = 0
    for interval in tree_intervals:
        result += interval // interval_gcd - 1
    print(result)


if __name__ == '__main__':
    main()
