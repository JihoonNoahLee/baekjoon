/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5073.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:21:12 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/30 14:35:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

const int SIDE_CNT = 3;

int main(void) {
  std::vector<int>  sides(SIDE_CNT);

  while (true) {
    for (int idx = 0; idx < SIDE_CNT; ++idx)
      std::cin >> sides[idx];
    if (sides[0] == 0 && sides[1] == 0 && sides[2] == 0)
      break;
    std::sort(sides.begin(), sides.end());
    if (sides[2] >= sides[0] + sides[1])
      std::cout << "Invalid";
    else if (sides[0] == sides[1] && sides[1] == sides[2])
      std::cout << "Equilateral";
    else if (sides[0] != sides[1] &&
              sides[1] != sides[2] &&
              sides[2] != sides[0])
      std::cout << "Scalene";
    else
      std::cout << "Isosceles";
    std::cout << std::endl;
  }
  return 0;
}
