# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1259.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 17:12:34 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/17 17:18:30 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def is_palindrome(num_str: str):
    for idx in range(len(num_str) // 2):
        if num_str[idx] != num_str[len(num_str) - 1 - idx]:
            return False
    return True


def main() -> None:
    while (True):
        num: str = input()
        if num == '0':
            break
        if is_palindrome(num):
            print('yes')
        else:
            print('no')


if __name__ == '__main__':
    main()
