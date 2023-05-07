# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2920.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 21:07:49 by jihoolee          #+#    #+#              #
#    Updated: 2023/05/07 21:13:07 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    arr = map(int, input().split())
    sorted_arr = sorted(arr)

    if (arr == sorted_arr):
        print('ascending')
    elif (arr == sorted_arr[::-1]):
        print('descending')
    else:
        print('mixed')


if (__name__ == '__main__'):
    main()
