# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    14215.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 14:52:24 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/30 14:53:52 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    a, b, c = sorted(list(map(int, input().split(' '))))

    if (c >= a + b):
        c = a + b - 1
    print(a + b + c)


if (__name__ == '__main__'):
    main()
