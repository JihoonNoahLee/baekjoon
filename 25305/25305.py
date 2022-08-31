# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    25305.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 03:18:06 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/01 03:20:48 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    _, rank = map(int, input().split())
    scores = list(map(int, input().split()))

    print(sorted(scores, reverse=True)[rank - 1])

if (__name__ == '__main__'):
    main()
