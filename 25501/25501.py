# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    25501.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 11:22:18 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/10 11:34:51 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

recursion_cnt = 0

def recursions(string: str, l, r):
    global recursion_cnt

    recursion_cnt += 1
    if (l >= r):
        return 1
    elif string[l] != string[r]:
        return 0
    else:
        return recursions(string, l + 1, r - 1)

def is_palindrome(string: str):
    return recursions(string, 0, len(string) - 1)

def main():
    global recursion_cnt
    cases = int(input())

    for _ in range(cases):
        string = input()
        recursion_cnt = 0
        print(is_palindrome(string), recursion_cnt)


if (__name__ == '__main__'):
    main()
