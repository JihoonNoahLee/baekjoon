# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10810.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 18:26:31 by jihoolee          #+#    #+#              #
#    Updated: 2023/04/16 18:57:53 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    baskets_cnt, iter_cnt = map(int, input().split())
    baskets = [0] * baskets_cnt

    for _ in range(iter_cnt):
        min_idx, max_idx, num = map(int, input().split())
        for idx in range(min_idx - 1, max_idx):
            baskets[idx] = num

    print(*baskets)


if __name__ == '__main__':
    main()
