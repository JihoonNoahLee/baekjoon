# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    2720.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 14:35:03 by jihoolee          #+#    #+#              #
#    Updated: 2023/09/29 14:43:13 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def print_change(cents: int) -> None:
    QUARTER_COST: int = 25
    DIME_COST: int = 10
    NICKEL_COST = 5

    quarter: int = cents // QUARTER_COST
    cents %= QUARTER_COST
    dime: int = cents // DIME_COST
    cents %= DIME_COST
    nickel: int = cents // NICKEL_COST
    cents %= NICKEL_COST
    penny: int = cents

    print(f'{quarter} {dime} {nickel} {penny}')


def main() -> None:
    cases_cnt = int(input())
    for _ in range(cases_cnt):
        cents = int(input())
        print_change(cents)


if (__name__ == '__main__'):
    main()
