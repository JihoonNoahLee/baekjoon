# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10101.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 02:17:17 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/30 02:19:15 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    a = int(input())
    b = int(input())
    c = int(input())
    if (a + b + c != 180):
        print('Error')
    elif (a == 60 and b == 60 and c == 60):
        print('Equilateral')
    elif (a != b and b != c and c != a):
        print('Scalene')
    else:
        print('Isosceles')


if (__name__ == '__main__'):
    main()
