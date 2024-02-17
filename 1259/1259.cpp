/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1259.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:49:55 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/17 17:11:54 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

bool is_palindrome(int num) {
  std::string num_str = std::to_string(num);

  for (size_t idx = 0; idx < num_str.length() / 2; ++idx)
    if (num_str[idx] != num_str[num_str.length() - 1 - idx])
      return false;
  return true;
}

int main(void) {
  int num;

  while (true) {
    std::cin >> num;
    if (num == 0)
      break;
    if (is_palindrome(num))
      std::cout << "yes" << std::endl;
    else
      std::cout << "no" << std::endl;
  }
  return 0;
}
