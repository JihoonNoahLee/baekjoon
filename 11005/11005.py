# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11005.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 03:13:47 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/29 11:29:56 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def to_base(decimal: int, base: int) -> str:
    BASE_STR = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    result: str = ''

    while (decimal):
        result = BASE_STR[decimal % base] + result
        decimal = decimal // base
    return result


def main() -> None:
    decimal, base = map(int, input().split(' '))

    print(to_base(decimal, base))


if (__name__ == '__main__'):
    main()
