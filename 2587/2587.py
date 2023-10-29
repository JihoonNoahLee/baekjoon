# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2587.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 22:29:25 by jihoolee          #+#    #+#              #
#    Updated: 2023/10/29 22:31:59 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LEN = 5


def main() -> None:
    nums = sorted([int(input()) for _ in range(LEN)])
    print(sum(nums) // LEN)
    print(nums[LEN // 2])


if (__name__ == '__main__'):
    main()
