/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10101.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 02:11:42 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/30 02:14:51 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  int a, b, c;

  std::cin >> a >> b >> c;
  if (a + b + c != 180)
    std::cout << "Error";
  else if (a == 60 && b == 60 && c == 60)
    std::cout << "Equilateral";
  else if (a != b && b != c && c != a)
    std::cout << "Scalene";
  else
    std::cout << "Isosceles";
  return 0;
}
