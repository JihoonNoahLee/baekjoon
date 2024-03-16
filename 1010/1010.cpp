/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1010.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:37:00 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/16 16:54:20 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int64_t nCr(int n, int r) {
  int64_t result = 1;

  if (r > n - r)
    r = n - r;
  for (int i = 0; i < r; ++i) {
    result *= (n - i);
    result /= (i + 1);
  }
  return result;
}

int main(void) {
  int case_cnt;
  int N, M;

  std::cin >> case_cnt;
  for (int i = 0; i < case_cnt; ++i) {
    std::cin >> M >> N;
    std::cout << nCr(N, M) << '\n';
  }
  return 0;
}
