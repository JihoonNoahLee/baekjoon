/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4134.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:41:16 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/12 22:15:06 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool is_prime(int64_t num) {
  if (num == 0 || num == 1)
    return false;

  for (int64_t divisor = 2; divisor * divisor <= num; ++divisor)
    if (num % divisor == 0)
      return false;
  return true;
}

int64_t get_next_prime(int64_t num) {
  while (!is_prime(num))
    ++num;
  return num;
}

int main(void) {
  int     case_cnt;
  int64_t num;

  std::cin >> case_cnt;
  for (int i = 0; i < case_cnt; ++i) {
    std::cin >> num;
    std::cout << get_next_prime(num) << std::endl;
  }
  return 0;
}
