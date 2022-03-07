/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15649.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 21:55:25 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/07 22:04:11 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int n, r;

void dfs(int* arr, bool* is_used, int depth) {
  if (depth == r) {
    for (int idx = 0; idx < r; ++idx)
      std::cout << arr[idx] << ' ';
    std::cout << '\n';
    return ;
  }
  for (int num = 1; num <= n; ++num) {
    if (is_used[num - 1] == true) continue ;
    is_used[num - 1] = true;
    arr[depth] = num;
    dfs(arr, is_used, depth + 1);
    is_used[num - 1] = false;
  }
}

void nCr(void) {
  int   arr[r];
  bool  is_used[n];

  for (int idx = 0; idx < n; ++idx)
    is_used[idx] = false;
  dfs(arr, is_used, 0);
}

int main(void) {
  std::cin >> n >> r;
  nCr();
  return 0;
}
