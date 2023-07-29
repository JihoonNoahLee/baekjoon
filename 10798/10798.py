# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    10798.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/19 21:44:17 by jihoolee          #+#    #+#              #
#    Updated: 2023/07/30 01:52:02 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

WORD_CNT = 5
MAX_WORD_LEN = 15


def main():
    words = [input() for _ in range(WORD_CNT)]
    words = [list(word) + [''] * (MAX_WORD_LEN - len(word)) for word in words]
    transposed = zip(*words)
    print(*[''.join(word) for word in transposed], sep='')


if (__name__ == '__main__'):
    main()
