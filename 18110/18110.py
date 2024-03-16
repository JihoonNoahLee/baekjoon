# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    18110.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 18:12:21 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/16 21:31:00 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys


PERCENTAGE: int = 30
input = sys.stdin.readline


def round_half_up(number: float, ndigits: int = 0) -> int:
    multiplier: int = 10 ** ndigits
    return int(number * multiplier + 0.5) / multiplier


def get_trimmed_mean(scores: list[int], percentage: int) -> int:
    if len(scores) == 0:
        return 0

    cutoff: int = int(round_half_up(len(scores) * percentage / 200))
    result: int = 0
    for idx in range(cutoff, len(scores) - cutoff):
        result += scores[idx]
    return int(round_half_up(result / (len(scores) - 2 * cutoff)))


def main() -> None:
    scores = sorted([int(input()) for _ in range(int(input()))])
    print(get_trimmed_mean(scores, PERCENTAGE))


if __name__ == '__main__':
    main()
