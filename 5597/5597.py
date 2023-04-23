# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    5597.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 11:17:36 by jihoolee          #+#    #+#              #
#    Updated: 2023/04/23 11:29:30 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NUM_STUDENTS = 30
NUM_UNSUBMITTED = 2


def main():
    unsubmitted_lst = [i + 1 for i in range(NUM_STUDENTS)]

    for _ in range(NUM_STUDENTS - NUM_UNSUBMITTED):
        unsubmitted_lst.remove(int(input()))
    print(*unsubmitted_lst, sep='\n')


if (__name__ == '__main__'):
    main()
