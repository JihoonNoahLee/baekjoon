# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    27433.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 15:02:52 by jihoolee          #+#    #+#              #
#    Updated: 2024/04/21 15:03:52 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def factorial(N: int) -> int:
    if (N == 0):
        return 1
    return N * factorial(N - 1)


def main() -> None:
    N = int(input())
    print(factorial(N))


if __name__ == '__main__':
    main()
