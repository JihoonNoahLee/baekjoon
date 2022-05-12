# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1620.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 00:24:18 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/13 00:31:56 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys

input = sys.stdin.readline

def main():
    pokedex_len, test_case_len = map(int, input().split())
    pokedex = {}
    for idx in range(1, pokedex_len + 1):
        input_val = input().rstrip()
        pokedex[idx] = input_val
        pokedex[input_val] = idx
    for _ in range(test_case_len):
        inspect = input().rstrip()
        if (inspect.isdigit()):
            print(pokedex[int(inspect)])
        else:
            print(pokedex[inspect])

if (__name__ == '__main__'):
    main()
