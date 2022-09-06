/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1004.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:02:17 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/06 11:57:23 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>

int square(int num) {
  return num * num;
}

bool in_circle(const std::pair<int, int>& from,
                const std::pair<int, int>& planet_center,
                int radius) {
  return (square(from.first - planet_center.first)
          + square(from.second - planet_center.second)) < square(radius);
}

int get_crossings(void) {
  std::pair<int, int> from;
  std::pair<int, int> dest;
  std::pair<int, int> planet_center;
  int radius;
  int planet_count;
  int result = 0;

  std::cin >> from.first >> from.second >> dest.first >> dest.second;
  std::cin >> planet_count;
  for (int i = 0; i < planet_count; ++i) {
    std::cin >> planet_center.first >> planet_center.second >> radius;
    if (in_circle(from, planet_center, radius)
        != in_circle(dest, planet_center, radius))
      ++result;
  }
  return result;
}

int main(void) {
  int cases;

  std::cin >> cases;
    for (int idx = 0; idx < cases; ++idx)
      std::cout << get_crossings() << std::endl;
  return 0;
}
