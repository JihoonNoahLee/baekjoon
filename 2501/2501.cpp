/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2501.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:17:37 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/29 23:20:56 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

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
  int               k;
  std::vector<int>  factors;

  std::cin >> num >> k;
  get_factors(num).swap(factors);
  try {
    std::cout << factors.at(k - 1);
  } catch (const std::out_of_range& oor) {
    std::cout << 0;
  }
  return 0;
}
