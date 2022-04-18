/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15115.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:24:50 by jihoolee          #+#    #+#             */
/*   Updated: 2022/04/18 11:51:24 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

float calc_budget(int K, int P, int X, int n) {
  return X * n + static_cast<float>(P * K) / n;
}

float get_minimum_budget(int K, int P, int X) {
  int n = 1;
  float budget = calc_budget(K, P, X, n);

  while (budget > calc_budget(K, P, X, n + 1)) {
    ++n;
    budget = calc_budget(K, P, X, n);
  }
  return budget;
}

int main(void) {
  int K, P, X;

  std::cin >> K >> P >> X;
  std::cout << std::fixed;
  std::cout.precision(3);
  std::cout << get_minimum_budget(K, P, X);
  return 0;
}
