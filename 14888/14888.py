# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    14888.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 18:00:26 by jihoolee          #+#    #+#              #
#    Updated: 2025/07/13 00:35:55 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

N = int(input())
nums_lst = list(map(int, input().split()))
op_nums = list(map(int, input().split()))

minimum = 1_000_000_000
maximum = -1_000_000_000


def calc_dfs(depth, product, addi, sub, mult, div):
    global maximum, minimum
    if (depth == N):
        maximum = max(maximum, product)
        minimum = min(minimum, product)
        return
    if (addi):
        calc_dfs(depth + 1, product + nums_lst[depth],
                 addi - 1, sub, mult, div)
    if (sub):
        calc_dfs(depth + 1, product - nums_lst[depth],
                 addi, sub - 1, mult, div)
    if (mult):
        calc_dfs(depth + 1, product * nums_lst[depth],
                 addi, sub, mult - 1, div)
    if (div):
        calc_dfs(depth + 1, int(product / nums_lst[depth]),
                 addi, sub, mult, div - 1)


calc_dfs(1, nums_lst[0], op_nums[0], op_nums[1], op_nums[2], op_nums[3])
print(maximum)
print(minimum)
