# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    25304.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 18:32:17 by jihoolee          #+#    #+#              #
#    Updated: 2022/08/07 18:42:31 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def mul(iterable):
    result = 1

    for elem in iterable:
        result *= elem;
    return result

def main():
    total_price = int(input())
    product_cnt = int(input())
    if (sum([mul(list(map(int, input().split()))) for _ in range(product_cnt)]) == total_price):
        print('Yes')
    else:
        print('No')


if (__name__ == "__main__"):
    main()
