/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4779.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:51:11 by jihoolee          #+#    #+#             */
/*   Updated: 2025/07/12 16:45:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

std::string cantor(int num) {
  if (num == 0) {
    return "-";
  } else {
    std::string side = cantor(num - 1);
    std::string center = "";

    for (size_t idx = 0; idx < pow(3, num - 1); ++idx)
      center += " ";
    return side + center + side;
  }
}

int main(void) {
  int num;

  while (std::cin >> num) {
    std::cout << cantor(num) << std::endl;
  }
  return 0;
}
