# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10815.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 12:46:21 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/11 12:56:05 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    _ = input()
    num_set = set(map(int, input().split()))
    _ = input()
    check_num = list(map(int, input().split()))

    result = ""
    for num in check_num:
        if (num in num_set):
            result += "1 "
        else:
            result += "0 "
    print(result)

if (__name__ == '__main__'):
    main()
