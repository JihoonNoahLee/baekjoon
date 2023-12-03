# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    13241.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 16:33:29 by jihoolee          #+#    #+#              #
#    Updated: 2023/12/03 16:45:33 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_gcd(num1: int, num2: int) -> int:
    if (num2 == 0):
        return num1
    return get_gcd(num2, num1 % num2)


def get_lcm(num1: int, num2: int) -> int:
    return num1 * num2 // get_gcd(num1, num2)


def main() -> None:
    num1, num2 = map(int, input().split())
    print(get_lcm(num1, num2))


if (__name__ == '__main__'):
    main()
