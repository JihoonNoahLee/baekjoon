# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1764.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 18:17:28 by jihoolee          #+#    #+#              #
#    Updated: 2022/05/16 23:04:19 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def main():
    not_heard_cnt, not_seen_cnt = map(int, input().split())
    not_heard_lst = set([input() for _ in range(not_heard_cnt)])
    not_seen_lst = set([input() for _ in range(not_seen_cnt)])

    not_heard_nor_seen_lst = sorted(list(not_heard_lst & not_seen_lst))
    print(len(not_heard_nor_seen_lst))
    for name in not_heard_nor_seen_lst:
        print(name)

if (__name__ == '__main__'):
    main()
