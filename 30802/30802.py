# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    30802.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/13 17:05:00 by jihoolee          #+#    #+#              #
#    Updated: 2024/07/13 17:09:46 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    total_people: int = int(input())
    tshirt_cnt: list[int] = list(map(int, input().split()))
    min_tshirt, min_pen = map(int, input().split())

    total_tshirt_binds: int = 0

    for size_cnt in tshirt_cnt:
        total_tshirt_binds += (size_cnt // min_tshirt)
        if size_cnt % min_tshirt:
            total_tshirt_binds += 1
    print(total_tshirt_binds)
    print(total_people // min_pen, total_people % min_pen)


if __name__ == '__main__':
    main()
