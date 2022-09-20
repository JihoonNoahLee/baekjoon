# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11051.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 22:08:34 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/19 22:08:46 by jihoolee         ###   ########.fr        #
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
    print(nCk(n, k) % 10007)

if (__name__ == '__main__'):
    main()
