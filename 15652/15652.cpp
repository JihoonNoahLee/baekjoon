/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15652.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:33:41 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/08 13:50:06 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void back_track(int n, int r, int* arr, int depth) {
  if (depth == r) {
    for (int idx = 0; idx < r; ++idx)
      std::cout << arr[idx] << ' ';
    std::cout << '\n';
    return ;
  }
  for (int num = depth == 0 ? 1 : arr[depth - 1]; num <= n; ++num) {
    arr[depth] = num;
    back_track(n, r, arr, depth + 1);
  }
}

void nPr(int n, int r) {
  int arr[r];

  back_track(n, r, arr, 0);
}

int main(void) {
  int n, r;

  std::cin >> n >> r;
  nPr(n, r);
  return 0;
}
