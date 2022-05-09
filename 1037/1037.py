# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1037.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 13:39:20 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/09 13:44:17 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    _ = int(input())
    factors = list(map(int, input().split()))
    factors.sort()
    print(factors[0] * factors[-1])

if (__name__ == '__main__'):
    main()
