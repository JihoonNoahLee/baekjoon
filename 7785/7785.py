# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    7785.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 22:23:39 by jihoolee          #+#    #+#              #
#    Updated: 2023/10/30 22:30:18 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    input_cnt: int = int(input())
    present_workers: set = set()

    for _ in range(input_cnt):
        name, info = input().split(' ')
        if (info == 'enter'):
            present_workers.add(name)
        else:
            present_workers.remove(name)

    for name in sorted(present_workers, reverse=True):
        print(name)


if (__name__ == '__main__'):
    main()
