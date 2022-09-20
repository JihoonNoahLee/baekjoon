/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11051.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:08:39 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/20 23:39:21 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const int MAX = 1000 + 1;

int nCk_mod(int n, int k, int mod) {
  int pascal_tri[MAX][MAX];

  if (n == 0)
    return 0;
  for (int i = 1; i <= n; ++i) {
    pascal_tri[i][1] = pascal_tri[i][i - 1] = i;
    pascal_tri[i][i] = pascal_tri[i][0] = 1;
  }
  for (int i = 3; i <= n; ++i) {
    for (int j = 0; j <= k; ++j) {
      if (j == 0)
        pascal_tri[i][j] = 1;
      else if (i == j)
        pascal_tri[i][j] = 1;
      else
        pascal_tri[i][j] = pascal_tri[i - 1][j - 1] + pascal_tri[i - 1][j];
      pascal_tri[i][j] = pascal_tri[i][j] % mod;
    }
  }
  return pascal_tri[n][k] % mod;
}

int main(void) {
  int n, k;

  std::cin >> n >> k;
  std::cout << nCk_mod(n, k, 10007);
  return 0;
}
