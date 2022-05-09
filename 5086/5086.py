# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    5086.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 18:08:26 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/09 12:39:06 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def is_factor(a, b):
    if (b % a == 0):
        return True
    return False

def is_multiple(a, b):
    if (a % b == 0):
        return True
    return False

def main():
    while (True):
        a, b = map(int, input().split())
        if (a == 0 or b == 0):
            break
        if (is_factor(a, b)):
            print('factor')
        elif (is_multiple(a, b)):
            print('multiple')
        else:
            print('neither')

if (__name__ == '__main__'):
    main()
