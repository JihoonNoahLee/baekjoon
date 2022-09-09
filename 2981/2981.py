# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2981.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 18:37:04 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/09 19:11:29 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

from math import sqrt

def get_gcd(a, b):
    if (b == 0):
        return a
    return get_gcd(b, a % b)

def print_same_remainder_nums(cases, nums: list):
    gcd = abs(nums[1] - nums[0])
    ans = []

    for idx in range(2, cases):
        gcd = get_gcd(gcd, abs(nums[idx] - nums[idx - 1]))
    for i in range(2, int(sqrt(gcd)) + 1):
        if (gcd % i == 0):
            ans.append(i)
            if (i * i != gcd):
                ans.append(gcd // i)
    ans.append(gcd)
    print(*sorted(ans))

def main():
    cases = int(input())
    nums = [int(input()) for _ in range(cases)]
    print_same_remainder_nums(cases, nums)

if (__name__ == '__main__'):
    main()
