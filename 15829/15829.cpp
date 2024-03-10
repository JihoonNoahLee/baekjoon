/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15829.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 13:56:45 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/10 14:33:07 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

const int r = 31;
const int64_t M = 1234567891;

int64_t hash(std::string str) {
  int64_t result = 0;
  int64_t acc_r = 1;

  for (size_t idx = 0; idx < str.length(); ++idx) {
    result = (result + (str[idx] - 'a' + 1) * acc_r) % M;
    acc_r =  (acc_r * r) % M;
  }
  return result % M;
}

int main(void) {
  int         length;
  std::string str;

  std::cin >> length;
  (void)length;
  std::cin >> str;
  std::cout << hash(str);
  return 0;
}
