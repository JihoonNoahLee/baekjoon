# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    19532.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 16:23:57 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/30 16:25:51 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    a, b, c, d, e, f = map(int, input().split())

    for i in range(-999, 999 + 1):
        for j in range(-999, 999 + 1):
            if ((a * i + b * j) == c and (d * i + e * j) == f):
                print(i, j)
                return


if (__name__ == '__main__'):
    main()
