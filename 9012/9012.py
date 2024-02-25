# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    9012.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 17:06:47 by jihoolee          #+#    #+#              #
#    Updated: 2024/02/25 17:13:20 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def is_VPS(PS: str) -> bool:
    s: list[str] = []

    for c in PS:
        if c == '(':
            s.append('(')
        else:
            try:
                s.pop()
            except Exception:
                return False
    return True if len(s) == 0 else False


def main() -> None:
    for _ in range(int(input())):
        ps: str = input()
        print('YES' if is_VPS(ps) else 'NO')


if __name__ == '__main__':
    main()
