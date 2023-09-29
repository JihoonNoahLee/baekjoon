/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2745.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 01:53:55 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/29 02:42:47 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

int to_decimal_char(const char c) {
  const char ASCII_SUB = 'A' - 10;

  if (c >= 'A' && c <= 'Z')
    return c - ASCII_SUB;
  return c - '0';
}

int to_decimal(const std::string& num_str, const int base) {
  int sum = 0;

  for (std::string::const_iterator it = num_str.begin();
        it != num_str.end();
        ++it)
    sum = sum * base + to_decimal_char(*it);
  return sum;
}

int main(void) {
  std::string num_str;
  int         base;

  std::cin >> num_str >> base;
  std::cout << to_decimal(num_str, base);
  return 0;
}
