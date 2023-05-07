# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10812.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 12:07:20 by jihoolee          #+#    #+#              #
#    Updated: 2023/05/07 12:39:12 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


def rotate_baskets(baskets: list, begin: int, end: int, mid: int) -> None:
    begin -= 1
    end -= 1
    mid -= 1

    baskets[begin:end + 1] = baskets[mid:end + 1] + baskets[begin:mid]


def main():
    baskets_cnt, input_cnt = map(int, input().split())
    baskets = [i + 1 for i in range(baskets_cnt)]

    for _ in range(input_cnt):
        rotate_baskets(baskets, *(map(int, input().split())))

    print(*baskets)


if __name__ == "__main__":
    main()
