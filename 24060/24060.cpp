/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   24060.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:23:59 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/19 21:46:22 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int input_cnt = 0;

void get_input(int* len_p, int* k_p, int** arr_p) {
  std::cin >> *len_p >> *k_p;
  *arr_p = new int[*len_p];
  for (int idx = 0; idx < *len_p; ++idx)
    std::cin >> (*arr_p)[idx];
}

void merge(int* arr, int begin_idx, int mid_idx, int end_idx, int k) {
  int temp[end_idx + 1];
  int former_idx = begin_idx;
  int latter_idx = mid_idx + 1;
  int temp_idx = 0;

  while (former_idx <= mid_idx && latter_idx <= end_idx) {
    if (arr[former_idx] <= arr[latter_idx]) {
      temp[temp_idx++] = arr[former_idx++];
    } else {
      temp[temp_idx++] = arr[latter_idx++];
    }
  }
  while (former_idx <= mid_idx)
    temp[temp_idx++] = arr[former_idx++];
  while (latter_idx <= end_idx)
    temp[temp_idx++] = arr[latter_idx++];
  former_idx = begin_idx;
  temp_idx = 0;
  while (former_idx <= end_idx) {
    arr[former_idx++] = temp[temp_idx++];
    if (++input_cnt == k)
      std::cout << temp[temp_idx - 1];
  }
}

void merge_sort(int* arr, int begin_idx, int end_idx, int k) {
  int mid_idx = (begin_idx + end_idx) / 2;

  if (begin_idx < end_idx) {
    merge_sort(arr, begin_idx, mid_idx, k);
    merge_sort(arr, mid_idx + 1, end_idx, k);
    merge(arr, begin_idx, mid_idx, end_idx, k);
  }
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int len;
  int k;
  int* arr;
  get_input(&len, &k, &arr);
  merge_sort(arr, 0, len - 1, k);
  if (input_cnt < k)
    std::cout << -1;
  return 0;
}
