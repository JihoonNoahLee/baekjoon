# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2420.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 17:12:40 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/02 17:13:20 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    n, m = map(int, input().split())
    print(abs(n - m))


if __name__ == '__main__':
    main()