# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10807.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/09 17:59:28 by jihoolee          #+#    #+#              #
#    Updated: 2023/04/09 18:01:39 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    _ = input()
    nums = list(map(int, input().split()))
    target_num = int(input())

    print(nums.count(target_num))


if (__name__ == '__main__'):
    main()
