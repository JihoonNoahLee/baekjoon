# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    5073.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 14:36:36 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/30 14:44:45 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    while True:
        a, b, c = sorted(list(map(int, input().split(' '))))
        if (a == 0 and b == 0 and c == 0):
            break
        if (c >= a + b):
            print('Invalid')
        elif (a == b and b == c):
            print('Equilateral')
        elif (a != b and b != c and c != a):
            print('Scalene')
        else:
            print('Isosceles')


if (__name__ == '__main__'):
    main()
