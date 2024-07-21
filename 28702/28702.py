# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    28702.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/21 18:06:50 by jihoolee          #+#    #+#              #
#    Updated: 2024/07/21 19:39:02 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

WORD_CNT: int = 3


def fizzbuzz(num: int):
    if num % 3 == 0 and num % 5 == 0:
        return 'FizzBuzz'
    elif num % 3 == 0:
        return 'Fizz'
    elif num % 5 == 0:
        return 'Buzz'
    else:
        return num


def main() -> None:
    num_strs: list[str] = [input() for _ in range(WORD_CNT)]

    for idx in range(len(num_strs)):
        if num_strs[idx] not in ['Fizz', 'Buzz', 'FizzBuzz']:
            num: int = int(num_strs[idx]) + WORD_CNT - idx
    print(fizzbuzz(num))


if __name__ == '__main__':
    main()
