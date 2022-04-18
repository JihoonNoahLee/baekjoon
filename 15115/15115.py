# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    15115.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/18 11:52:37 by jihoolee          #+#    #+#              #
#    Updated: 2022/04/18 11:56:43 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

K, P, X = map(int, input().split())

def calc_budget(K, P, X, n):
    return X * n + P * K / n

def get_minimum_budget(K, P, X):
    n = 1
    budget = calc_budget(K, P, X, n)

    while (budget > calc_budget(K, P, X, n + 1)):
        n += 1
        budget = calc_budget(K, P, X, n)
    return budget

if (__name__ == '__main__'):
    print("{:.3f}".format(get_minimum_budget(K, P, X)))
