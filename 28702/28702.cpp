/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   28702.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:29:52 by jihoolee          #+#    #+#             */
/*   Updated: 2024/07/21 18:01:00 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

const size_t WORD_CNT = 3;

size_t get_numeric_elem_idx(const std::vector<std::string>& v) {
  size_t idx = 0;

  for (idx = 0; idx < v.size(); ++idx) {
    std::string substring = v[idx].substr(0, 4);

    if (substring != "Fizz" && substring != "Buzz")
      break;
  }
  return idx;
}

void print_fizzbuzz(int num) {
  if (num % 3 == 0 && num % 5 == 0)
    std::cout << "FizzBuzz";
  else if (num % 3 == 0)
    std::cout << "Fizz";
  else if (num % 5 == 0)
    std::cout << "Buzz";
  else
    std::cout << num;
}

int main(void) {
  std::vector<std::string> v(WORD_CNT);

  for (size_t idx = 0; idx < WORD_CNT; ++idx)
    std::cin >> v[idx];

  size_t  numeric_idx = get_numeric_elem_idx(v);

  print_fizzbuzz(std::stoi(v[numeric_idx]) + WORD_CNT - numeric_idx);
  return 0;
}
