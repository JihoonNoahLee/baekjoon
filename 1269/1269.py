# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1269.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 12:02:50 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/18 12:07:34 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    a_len, b_len = map(int, input().split())
    a = set(map(int, input().split()))
    b = set(map(int, input().split()))

    print(a_len + b_len - 2 * len(a & b))

if (__name__ == '__main__'):
    main()
