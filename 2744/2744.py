# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2744.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 13:47:36 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/03 13:51:58 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def swap_case(input_: str) -> str:
    swapped_word: str = ''

    for char in input_:
        if char.islower():
            swapped_word += char.upper()
        elif char.isupper():
            swapped_word += char.lower()
        else:
            swapped_word += char
    return swapped_word


def main() -> None:
    print(swap_case(input()))


if __name__ == '__main__':
    main()
