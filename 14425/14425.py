# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    14425.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 13:07:42 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/11 13:12:46 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    set_len, test_case_len = map(int, input().split())
    str_set = {input() for _ in range(set_len)}
    test_cases = [input() for _ in range(test_case_len)]
    count = 0

    for string in test_cases:
        if (string in str_set):
            count += 1
    print(count)
if (__name__ == '__main__'):
    main()
