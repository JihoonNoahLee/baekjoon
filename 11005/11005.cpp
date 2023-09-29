/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11005.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 02:54:59 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/29 03:12:43 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

char to_base_char(int num) {
  const char ASCII_SUB = 'A' - 10;

  if (num >= 10)
    return num + ASCII_SUB;
  return '0' + num;
}

std::string to_base(int decimal, const int base) {
  std::string result;

  while (decimal) {
    result.insert(result.begin(), to_base_char(decimal % base));
    decimal /= base;
  }
  return result;
}

int main(void) {
  int decimal;
  int base;

  std::cin >> decimal >> base;
  std::cout << to_base(decimal, base);
  return 0;
}
