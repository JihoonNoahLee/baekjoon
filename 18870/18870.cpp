/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18870.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:52:18 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/04 21:38:38 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main(void) {
  int len;
  std::cin >> len;
  std::vector<int>  inputs(len);
  std::vector<int>  sorted_nums(len);

  for (int idx = 0; idx < len; ++idx) {
    std::cin >> inputs[idx];
    sorted_nums[idx] = inputs[idx];
  }
  std::sort(sorted_nums.begin(), sorted_nums.end());
  std::vector<int>::iterator sorted_end = std::unique(sorted_nums.begin(), sorted_nums.end());
  for (int idx = 0; idx < len; ++idx) {
    std::cout <<
      std::lower_bound(sorted_nums.begin(), sorted_end, inputs[idx]) - sorted_nums.begin()<< ' ';
  }
  return 0;
}
