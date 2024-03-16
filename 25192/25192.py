# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    25192.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 00:09:09 by jihoolee          #+#    #+#              #
#    Updated: 2024/03/17 00:20:34 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main() -> None:
    users: set = set()
    bear_emoji_cnt: int = 0

    for _ in range(int(input())):
        input_ = input()
        if input_ == 'ENTER':
            bear_emoji_cnt += len(users)
            users.clear()
        else:
            users.add(input_)
    bear_emoji_cnt += len(users)
    print(bear_emoji_cnt)


if __name__ == '__main__':
    main()
