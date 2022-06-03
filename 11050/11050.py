# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11050.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 15:38:27 by jihoolee          #+#    #+#              #
#    Updated: 2022/06/03 15:43:50 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def sub_fact(num, length):
    result = 1

    while (length > 0):
        result *= num
        length -= 1
        num -= 1
    return result


def nCk(n, k):
    return sub_fact(n, k) // sub_fact(k, k)

def main():
    n, k = map(int, input().split())
    print(nCk(n, k))

if (__name__ == '__main__'):
    main()
