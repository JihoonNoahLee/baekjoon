# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2444.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 13:44:13 by jihoolee          #+#    #+#              #
#    Updated: 2023/05/06 17:18:53 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


def print_line(N, i):
    print(" " * (N - 1 - i) + "*" * (2 * i + 1))


def main():
    N = int(input())

    for i in range(N):
        print_line(N, i)
    for i in range(N - 2, -1, -1):
        print_line(N, i)


if __name__ == "__main__":
    main()
