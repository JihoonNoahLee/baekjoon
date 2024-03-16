# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1010.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 16:46:51 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/16 16:49:36 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def nCr(n: int, r: int) -> int:
    result: int = 1

    if (r > n - r):
        r = n - r
    for i in range(r):
        result *= (n - i)
        result //= (i + 1)
    return result


def main() -> None:
    for _ in range(int(input())):
        M, N = map(int, input().split())
        print(nCr(N, M))


if __name__ == '__main__':
    main()
