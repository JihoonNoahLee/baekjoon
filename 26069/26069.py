# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    26069.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 00:29:12 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/17 00:32:00 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    rainbow_deacers: set = set(['ChongChong'])

    for _ in range(int(input())):
        name1, name2 = input().split()
        if name1 in rainbow_deacers:
            rainbow_deacers.add(name2)
        elif name2 in rainbow_deacers:
            rainbow_deacers.add(name1)
    print(len(rainbow_deacers))


if __name__ == '__main__':
    main()
