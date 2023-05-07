/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2475.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:16:41 by jihoolee          #+#    #+#             */
/*   Updated: 2023/05/07 21:33:32 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

const int DIGIT_LEN = 5;

int op_square(int num) {
  return num * num;
}

int get_parity(const std::vector<int>& digits) {
  std::vector<int>  temp(DIGIT_LEN);

  std::transform(digits.begin(), digits.end(), temp.begin(), op_square);
  return std::accumulate(temp.begin(), temp.end(), 0) % 10;
}

int main(void) {
  std::vector<int>  digits(DIGIT_LEN);

  for (size_t idx = 0; idx < DIGIT_LEN; ++idx)
    std::cin >> digits[idx];
  std::cout << get_parity(digits);
  return 0;
}
