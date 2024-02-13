# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    17103.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 20:40:13 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/13 20:51:05 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAX_NUM: int = 1000000
IS_PRIME = [True] * (MAX_NUM + 1)


def eratos() -> None:
    for i in range(2, int(MAX_NUM ** 0.5) + 1):
        if IS_PRIME[i]:
            for j in range(i * i, MAX_NUM + 1, i):
                IS_PRIME[j] = False


def get_goldbach_partition_count(num: int) -> int:
    cnt: int = 0

    for i in range(2, int(num / 2) + 1):
        if IS_PRIME[i] and IS_PRIME[num - i]:
            cnt += 1
    return cnt


def main() -> None:
    eratos()
    for _ in range(int(input())):
        num: int = int(input())
        print(get_goldbach_partition_count(num))


if __name__ == '__main__':
    main()
