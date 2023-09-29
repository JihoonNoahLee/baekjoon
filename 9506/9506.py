# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    9506.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 01:24:35 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/30 01:35:04 by jihoolee         ###   ########.fr        #
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
    return factors[:-1]


def main() -> None:
    while ((num := int(input())) != -1):
        factors = get_factors(num)
        if (sum(factors) == num):
            print(f'{num} = ', end='')
            print(*factors, sep=' + ')
        else:
            print(f'{num} is NOT perfect.')


if (__name__ == '__main__'):
    main()
