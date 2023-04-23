# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10811.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 11:37:04 by jihoolee          #+#    #+#              #
#    Updated: 2023/04/23 12:55:22 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    basket_cnt, move_cnt = map(int, input().split())
    baskets = [i + 1 for i in range(basket_cnt)]
    for _ in range(move_cnt):
        i, j = map(int, input().split())
        baskets[i - 1:j] = reversed(baskets[i - 1:j])
    print(*baskets)


if (__name__ == '__main__'):
    main()
