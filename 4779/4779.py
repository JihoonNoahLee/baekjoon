# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    4779.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/12 15:18:30 by jihoolee          #+#    #+#              #
#    Updated: 2025/07/12 15:50:15 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def cantor(num: int) -> str:
    if num == 0:
        return '-'
    else:
        side: str = cantor(num - 1)
        center: str = ' ' * (3 ** (num - 1))
        return side + center + side


def main() -> None:
    while True:
        try:
            num: int = int(input())
            print(cantor(num))
        except EOFError:
            break


if __name__ == "__main__":
    main()
