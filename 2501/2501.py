# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2501.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 23:21:51 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/30 00:41:47 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


def get_factors(num: int) -> list[int]:
    factors: list[int] = [1, num]

    i = 2
    while (i ** 2 <= num):
        if (num % i == 0):
            factors.insert(len(factors) // 2, i)
            if (i ** 2 != num):
                factors.insert(len(factors) // 2 + 1, num // i)
        i += 1
    return factors


def main() -> None:
    num, k = map(int, input().split(' '))
    try:
        print(get_factors(num)[k - 1])
    except IndexError as e:
        print(0)


if (__name__ == '__main__'):
    main()
