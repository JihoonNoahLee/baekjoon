# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    20920.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 14:10:29 by jihoolee          #+#    #+#              #
#    Updated: 2024/04/21 14:57:17 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys


input_ = sys.stdin.readline


def main() -> None:
    word_count, min_word_len = map(int, input().split())
    words: dict[str, int] = {}
    for _ in range(word_count):
        word = input_().strip()
        if len(word) < min_word_len:
            continue
        words[word] = words.get(word, 0) + 1
    wordbook: list[tuple[str, int]] = sorted(
        words.items(), key=lambda x: (-x[1], -len(x[0]), x[0])
    )
    for word in wordbook:
        print(word[0])


if __name__ == '__main__':
    main()
