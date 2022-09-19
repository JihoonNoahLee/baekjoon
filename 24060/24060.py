# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    24060.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 21:47:03 by jihoolee          #+#    #+#              #
#    Updated: 2022/09/19 22:04:41 by jihoolee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

input_cnt = 0

def merge(arr, begin_idx, mid_idx, end_idx, k):
    global input_cnt
    temp = []
    former_idx = begin_idx
    latter_idx = mid_idx + 1
    temp_idx = 0

    while (former_idx <= mid_idx and latter_idx <= end_idx):
        if (arr[former_idx] <= arr[latter_idx]):
            temp.append(arr[former_idx])
            former_idx += 1
        else:
            temp.append(arr[latter_idx])
            latter_idx += 1
    while (former_idx <= mid_idx):
        temp.append(arr[former_idx])
        former_idx += 1
    while (latter_idx <= end_idx):
        temp.append(arr[latter_idx])
        latter_idx += 1
    former_idx = begin_idx
    while (former_idx <= end_idx):
        arr[former_idx] = temp[temp_idx]
        former_idx += 1
        temp_idx += 1
        input_cnt += 1
        if (input_cnt == k):
            print(temp[temp_idx - 1])


def merge_sort(arr, begin_idx, end_idx, k):
    mid_idx = (begin_idx + end_idx) // 2

    if (begin_idx < end_idx):
        merge_sort(arr, begin_idx, mid_idx, k)
        merge_sort(arr, mid_idx + 1, end_idx, k)
        merge(arr, begin_idx, mid_idx, end_idx, k)

def main():
    length, k = map(int, input().split())
    arr = list(map(int, input().split()))
    merge_sort(arr, 0, length - 1, k)
    if (input_cnt < k):
        print(-1)

if (__name__ == '__main__'):
    main()
