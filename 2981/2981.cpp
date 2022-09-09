/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2981.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:05:20 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/09 18:36:32 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

int get_gcd(int a, int b) {
  if (b == 0)
    return a;
  return get_gcd(b, a % b);
}

void print_same_remainder_nums(int cases, const std::vector<int>& nums) {
  int gcd = abs(nums[1] - nums[0]);
  std::vector<int> ans;

  for (int idx = 2; idx < cases; ++idx)
    gcd = get_gcd(gcd, abs(nums[idx] - nums[idx - 1]));
  for (int i = 2; i * i <= gcd; ++i) {
    if (gcd % i == 0) {
      ans.push_back(i);
      if (i * i != gcd)
        ans.push_back(gcd / i);
    }
  }
  ans.push_back(gcd);
  std::sort(ans.begin(), ans.end());
  for (int idx = 0; idx < ans.size(); ++idx)
    std::cout << ans[idx] << ' ';
}

int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int cases;
  std::cin >> cases;
  std::vector<int> nums(cases);

  for (int idx = 0; idx < cases; ++idx)
    std::cin >> nums[idx];
  print_same_remainder_nums(cases, nums);
  return 0;
}
