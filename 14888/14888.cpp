/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14888.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:16:57 by jihoolee          #+#    #+#             */
/*   Updated: 2022/04/12 19:04:24 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

int min = INT_MAX;
int max = INT_MIN;

void calc_min_max(int len, int product, int depth,
                  const std::vector<int>& nums, std::vector<int>& ops) {
  if (depth == len) {
    min = std::min(min, product);
    max = std::max(max, product);
    return;
  }
  for (int idx = 0; idx < 4; ++idx) {
    if (ops[idx] > 0) {
      --ops[idx];
      switch(idx) {
        case 0:
        calc_min_max(len, product + nums[depth], depth + 1, nums, ops);
        break;
        case 1:
        calc_min_max(len, product - nums[depth], depth + 1, nums, ops);
        break;
        case 2:
        calc_min_max(len, product * nums[depth], depth + 1, nums, ops);
        break;
        case 3:
        calc_min_max(len, product / nums[depth], depth + 1, nums, ops);
        break;
      }
      ++ops[idx];
    }
  }
}

int main(void) {
  int               len;
  std::vector<int>  nums;
  std::vector<int>  ops(4);

  std::cin >> len;
  nums.resize(len);
  for (int i = 0; i < len; ++i)
    std::cin >> nums[i];
  for (int i = 0; i < 4; ++i)
    std::cin >> ops[i];
  calc_min_max(len, nums[0], 1, nums, ops);
  std::cout << max << '\n' << min;
  return 0;
}
