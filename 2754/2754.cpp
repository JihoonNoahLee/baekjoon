/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2754.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:25:35 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/03 13:32:07 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
  std::string grade;

  std::cin >> grade;
  if (grade == "A+") {
    std::cout << "4.3";
  } else if (grade == "A0") {
    std::cout << "4.0";
  } else if (grade == "A-") {
    std::cout << "3.7";
  } else if (grade == "B+") {
    std::cout << "3.3";
  } else if (grade == "B0") {
    std::cout << "3.0";
  } else if (grade == "B-") {
    std::cout << "2.7";
  } else if (grade == "C+") {
    std::cout << "2.3";
  } else if (grade == "C0") {
    std::cout << "2.0";
  } else if (grade == "C-") {
    std::cout << "1.7";
  } else if (grade == "D+") {
    std::cout << "1.3";
  } else if (grade == "D0") {
    std::cout << "1.0";
  } else if (grade == "D-") {
    std::cout << "0.7";
  } else if (grade == "F") {
    std::cout << "0.0";
  }
  return 0;
}
