# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10816.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 22:47:47 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/14 23:40:03 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    _ = input()
    cards_lst = list(map(int, input().split()))
    _ = input()
    test_cases_lst = list(map(int, input().split()))

    cards_dict = dict()
    result = ""

    for num in cards_lst:
        cards_dict[num] = cards_dict.get(num, 0) + 1
    for test_case in test_cases_lst:
        result += str(cards_dict.get(test_case, 0)) + ' '
    print(result)

if (__name__ == '__main__'):
    main()
