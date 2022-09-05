/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2477.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:41:04 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/05 14:06:42 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <utility>


int get_area(const std::vector<std::pair<int, int> >& side_lengths) {
  std::pair<int, int> max_sides[2];
  int whole_area;
  int cutout_area;

  for (int idx = 0; idx < 2; ++idx)
    max_sides[idx] = std::pair<int, int>(0, 0);
  for (int idx = 0; idx < 6; ++idx) {
    if (side_lengths[idx].first == 1 || side_lengths[idx].first == 2) {
      if (side_lengths[idx].second > max_sides[0].second) {
        max_sides[0].first = idx;
        max_sides[0].second = side_lengths[idx].second;
      }
    } else {
      if (side_lengths[idx].second > max_sides[1].second) {
        max_sides[1].first = idx;
        max_sides[1].second = side_lengths[idx].second;
      }
    }
  }
  whole_area = max_sides[0].second * max_sides[1].second;
  cutout_area = side_lengths[(max_sides[0].first + 3) % 6].second
                  * side_lengths[(max_sides[1].first + 3) % 6].second;
  return whole_area - cutout_area;
}

void get_inputs(int* fruits_per_unit, std::vector<std::pair<int, int> >* side_lengths) {
  std::cin >> *fruits_per_unit;
  for (int i = 0; i < 6; ++i)
    std::cin >> (*side_lengths)[i].first >> (*side_lengths)[i].second;
}

int main(void) {
  int fruits_per_unit;
  std::vector<std::pair<int, int> > side_lengths(6);

  get_inputs(&fruits_per_unit, &side_lengths);
  std::cout << fruits_per_unit * get_area(side_lengths);
  return 0;
}
