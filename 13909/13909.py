# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    13909.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 20:24:30 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/14 20:26:16 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_open_window_cnt(num: int) -> int:
    cnt: int = 1

    while (cnt ** 2 <= num):
        cnt += 1
    return cnt - 1


def main() -> None:
    cnt: int = int(input())
    print(get_open_window_cnt(cnt))


if __name__ == '__main__':
    main()
