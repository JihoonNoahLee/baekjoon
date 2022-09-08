# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2609.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 11:52:04 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/08 11:55:05 by jihoolee         ###   ########.fr        #
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
    a, b = map(int, input().split())
    print(get_gcd(a, b))
    print(get_lcm(a, b))

if (__name__ == '__main__'):
    main()
