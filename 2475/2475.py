# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2475.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 21:34:03 by jihoolee          #+#    #+#              #
#    Updated: 2023/05/07 21:37:37 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def op_square(num):
    return num ** 2


def get_parity(digits, func):
    return sum([func(elem) for elem in digits]) % 10


def main():
    digits = map(int, input().split())

    print(get_parity(digits, op_square))


if (__name__ == '__main__'):
    main()
