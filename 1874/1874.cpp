/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1874.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:29:50 by jihoolee          #+#    #+#             */
/*   Updated: 2024/08/04 15:09:14 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stack>

std::vector<char> format_by_stack(const std::vector<int>& nums) {
  std::vector<char> operations;
  std::stack<int>   s;
  int               new_num = 1;

  for (size_t idx = 0; idx < nums.size(); ++idx) {
    while (s.empty() || s.top() != nums[idx]) {
      if (new_num > nums.size())
        return std::vector<char>();
      s.push(new_num);
      ++new_num;
      operations.push_back('+');
    }
    s.pop();
    operations.push_back('-');
  }
  return operations;
}

void get_input(std::vector<int>* p_v) {
  int len;

  std::cin >> len;
  p_v->resize(len);
  for (int idx = 0; idx < len; ++idx)
    std::cin >> (*p_v)[idx];
}

int main(void) {
  std::vector<int>  nums;

  get_input(&nums);

  std::vector<char> operations = format_by_stack(nums);
  if (!operations.empty()) {
    for (size_t idx = 0; idx < operations.size(); ++idx)
      std::cout << operations[idx] << '\n';
  } else {
    std::cout << "NO";
  }
  return 0;
}
