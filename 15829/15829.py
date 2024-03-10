# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    15829.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 14:33:36 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/10 14:36:18 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

R: int = 31
M: int = 1234567891


def hash(string: str):
    result = 0

    for idx, c in enumerate(string):
        result += (ord(c) - ord('a') + 1) * (R ** idx)
    return result % M


def main() -> None:
    _ = input()
    string = input()

    print(hash(string))


if __name__ == '__main__':
    main()
