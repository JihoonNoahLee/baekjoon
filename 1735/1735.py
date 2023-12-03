# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1735.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 17:14:05 by jihoolee          #+#    #+#              #
#    Updated: 2023/12/03 20:03:51 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

class fraction:
    def __init__(self, numerator: int, denominator: int):
        self.numerator = numerator
        self.denominator = denominator

    def __add__(self, rhs):
        if (self.denominator == rhs.denominator):
            return fraction(self.numerator + rhs.numerator, self.denominator)
        return fraction(
            self.numerator * rhs.denominator + self.denominator * rhs.numerator,
            self.denominator * rhs.denominator
        )

    def reduce(self):
        gcd: int = get_gcd(self.numerator, self.denominator)

        self.numerator //= gcd
        self.denominator //= gcd


def get_gcd(num1: int, num2: int) -> int:
    if (num2 == 0):
        return num1
    return get_gcd(num2, num1 % num2)


def main() -> None:
    num1 = fraction(*tuple(map(int, input().split())))
    num2 = fraction(*map(int, input().split()))
    result = num1 + num2
    result.reduce()
    print(result.numerator, result.denominator)


if (__name__ == '__main__'):
    main()
