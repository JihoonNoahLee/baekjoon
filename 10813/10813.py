# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10813.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 19:28:52 by jihoolee          #+#    #+#              #
#    Updated: 2023/04/22 19:34:22 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main(input_cnt: int, baskets: list):
    for _ in range(input_cnt):
        i, j = map(int, input().split())
        baskets[i - 1], baskets[j - 1] = baskets[j - 1], baskets[i - 1]
    print(*baskets)


if (__name__ == '__main__'):
    basket_cnt, input_cnt = map(int, input().split())
    baskets = [i + 1 for i in range(basket_cnt)]
    main(input_cnt, baskets)
