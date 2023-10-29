/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2587.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:19:34 by jihoolee          #+#    #+#             */
/*   Updated: 2023/10/29 22:27:07 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

const size_t LEN = 5;

void get_input(std::vector<int>* p_nums) {
  std::vector<int>& nums = *p_nums;

  for (size_t idx = 0; idx < LEN; ++idx)
    std::cin >> nums[idx];
}

int get_avg(const std::vector<int>& nums) {
  int sum = 0;

  for (size_t idx = 0; idx < LEN; ++idx)
    sum += nums[idx];
  return sum / LEN;
}

int get_midval(std::vector<int>* p_nums) {
  std::sort(p_nums->begin(), p_nums->end());
  return p_nums->at(LEN / 2);
}

int main(void) {
  std::vector<int> nums(5);

  get_input(&nums);
  std::cout << get_avg(nums) << std::endl;
  std::cout << get_midval(&nums);
  return 0;
}
