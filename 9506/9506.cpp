/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9506.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:43:42 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/30 01:39:05 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void print_sum(int num, const std::vector<int>& factors) {
  std::cout << num << " = ";
  for (size_t idx = 0; idx + 2 < factors.size(); ++idx) {
    std::cout << factors[idx] << " + ";
  }
  std::cout << *(factors.end() - 2);
}

std::vector<int> get_factors(int num) {
  std::vector<int> factors = {1, num};

  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0) {
      factors.insert(factors.begin() + (factors.size() / 2), i);
      if (i * i != num)
        factors.insert(factors.begin() + (factors.size() / 2 + 1), num / i);
    }
  }
  return factors;
}

int main(void) {
  int               num;
  std::vector<int>  factors;

  while (true) {
    std::cin >> num;
    if (num == -1)
      break;
    get_factors(num).swap(factors);
    if (num == std::accumulate(factors.begin(), factors.end() - 1, 0))
      print_sum(num, factors);
    else
      std::cout << num << " is NOT perfect.";
    std::cout << std::endl;
  }
}
