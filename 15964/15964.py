# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    15964.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 13:53:16 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/03 13:54:36 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    A, B = map(int, input().split())
    print((A + B) * (A - B))


if __name__ == '__main__':
    main()
