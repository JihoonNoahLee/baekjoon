# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    4949.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 15:05:40 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/01 15:16:26 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def is_brace_matched(sentence: str) -> bool:
    s: list[str] = []

    for char in sentence:
        if char == '(' or char == '[':
            s.append(char)
        elif char == ')' or char == ']':
            try:
                top: str = s.pop()
            except IndexError:
                return False
            if (char == ')' and top != '(') or (char == ']' and top != '['):
                return False
    if len(s) != 0:
        return False
    return True


def main() -> None:
    while True:
        input_: str = input()
        if input_ == '.':
            break
        print('yes' if is_brace_matched(input_) else 'no')


if __name__ == '__main__':
    main()
