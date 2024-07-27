# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1654.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 17:48:42 by jihoolee          #+#    #+#              #
#    Updated: 2024/07/27 18:22:41 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def get_max_lans_length(lans_lengths: list[int], needed_lans_cnt: int) -> int:
    left: int = 1
    right: int = max(lans_lengths)

    while left <= right:
        mid: int = (left + right) // 2
        lans_cnt: int = sum([lan_len // mid for lan_len in lans_lengths])
        if (lans_cnt >= needed_lans_cnt):
            result: int = mid
            left = mid + 1
        else:
            right = mid - 1
    return result


def main() -> None:
    current_lans_cnt, needed_lans_cnt = map(int, input().split())
    lans_lengths: list[int] = [int(input()) for _ in range(current_lans_cnt)]

    print(get_max_lans_length(lans_lengths, needed_lans_cnt))


if __name__ == '__main__':
    main()
