# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1934.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 12:01:13 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/08 12:03:53 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_gcd(a, b):
    if (b == 0):
        return a
    return get_gcd(b, a % b)

def get_lcm(a, b):
    gcd = get_gcd(a, b)

    return a * b // gcd

def main():
    cases = int(input())
    for _ in range(cases):
        a, b = map(int, input().split())
        print(get_lcm(a, b))

if (__name__ == '__main__'):
    main()
