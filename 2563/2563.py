# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2563.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 13:25:30 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/29 13:56:31 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CANVAS_SIZE = 100
PAPER_SIZE = 10


def cover_canvas(canvas: list[list[int]], x_coord: int, y_coord: int) -> None:
    for x_idx in range(PAPER_SIZE):
        for y_idx in range(PAPER_SIZE):
            canvas[x_coord + x_idx][y_coord + y_idx] = 1


def main() -> None:
    inputs: list[tuple[int, int]] = [
        tuple(map(int, input().split(' '))) for _ in range(int(input()))
    ]

    canvas = [[0] * CANVAS_SIZE for _ in range(CANVAS_SIZE)]
    for x_coord, y_coord in inputs:
        cover_canvas(canvas, x_coord, y_coord)
    print(sum(map(sum, canvas)))


if (__name__ == '__main__'):
    main()
