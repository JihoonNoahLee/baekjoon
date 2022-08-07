# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    3003.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 17:04:40 by jihoolee          #+#    #+#              #
#    Updated: 2022/08/07 17:25:48 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    DEFAULT_SET = [1, 1, 2, 2, 2, 8]
    input_lst = list(map(int, input().split()))

    print(*[x - y for x, y in  zip(DEFAULT_SET, input_lst)])


if __name__ == "__main__":
    main()
