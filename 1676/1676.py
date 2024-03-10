# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1676.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 15:07:38 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/10 15:08:51 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def cnt_trail_0(num: int) -> int:
    divisor: int = 5
    count: int = 0

    while (divisor <= num):
        count += num // divisor
        divisor *= 5
    return count


def main() -> None:
    num: int = int(input())
    print(cnt_trail_0(num))


if __name__ == '__main__':
    main()
