/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13241.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:32:23 by jihoolee          #+#    #+#             */
/*   Updated: 2023/11/15 07:22:59 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

int64_t get_gcd(int64_t num1, int64_t num2) {
  if (num2 == 0)
    return num1;
  return get_gcd(num2, num1 % num2);
}

int64_t get_lcm(int64_t num1, int64_t num2) {
  return num1 * num2 / get_gcd(num1, num2);
}

int main(void) {
  int64_t num1, num2;

  std::cin >> num1 >> num2;
  std::cout << get_lcm(num1, num2);
  return 0;
}
