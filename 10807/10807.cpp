/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10807.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:48:10 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/09 17:58:02 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

void get_input(std::vector<int>& nums, int& target_num) {
  int len;

  std::cin >> len;
  nums.resize(len);
  for (int idx = 0; idx < len; ++idx)
    std::cin >> nums[idx];
  std::cin >> target_num;
}

int count_target(const std::vector<int>& nums, const int& target_num) {
  int count = 0;

  for (std::vector<int>::const_iterator it = nums.begin();
        it != nums.end();
        ++it) {
    if (*it == target_num)
      ++count;
  }
  return count;
}

int main(void) {
  std::vector<int> nums;
  int target_num;

  get_input(nums, target_num);
  std::cout << count_target(nums, target_num);
  return 0;
}
