# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    11478.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 12:17:48 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/19 12:29:29 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    string = input()

    substr = set([string[idx:idx + size]
                    for size in range(1, len(string) + 1)
                        for idx in range(0, len(string) - size + 1)])
    print(len(substr))
if (__name__ == '__main__'):
    main()
