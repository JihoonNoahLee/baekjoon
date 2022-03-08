/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15651.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:18:08 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/08 12:24:06 by jihoolee         ###   ########.fr       */
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
  for (int num = 1; num <= n; ++num) {
    arr[depth] = num;
    back_track(n, r, arr, depth + 1);
  }
}

void  nPir(int n, int r) {
  int arr[r];

  back_track(n, r, arr, 0);
}

int main(void) {
  int n, r;

  std::cin >> n >> r;
  nPir(n, r);
  return 0;
}
