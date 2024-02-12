# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    4134.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 21:53:23 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/12 22:13:01 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import math


def is_prime(num: int) -> bool:
    if num == 0 or num == 1:
        return False

    for divisor in range(2, int(math.sqrt(num)) + 1):
        if num % divisor == 0:
            return False
    return True


def get_next_prime(num: int) -> int:
    while (not is_prime(num)):
        num += 1
    return num


def main() -> None:
    for _ in range(int(input())):
        num: int = int(input())
        print(get_next_prime(num))


if __name__ == '__main__':
    main()
