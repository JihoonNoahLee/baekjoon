/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1654.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:40:10 by jihoolee          #+#    #+#             */
/*   Updated: 2024/07/27 17:48:06 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

int get_lans_cnt(const std::vector<int>& lans, int lan_length) {
  int count = 0;

  for (size_t idx = 0; idx < lans.size(); ++idx)
    count += lans[idx] / lan_length;
  return count;
}

int get_max_cut_lan_length(const std::vector<int>& lans, int needed_lans_cnt) {
  int64_t left = 1;
  int64_t right = *std::max_element(lans.begin(), lans.end());
  int result = 0;

  while (left <= right) {
    int64_t mid = left + (right - left) / 2;
    int lans_cnt = get_lans_cnt(lans, mid);

    if (lans_cnt >= needed_lans_cnt) {
      result = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return result;
}

int main(void) {
  int               current_lans_cnt;
  int               needed_lans_cnt;
  std::cin >> current_lans_cnt >> needed_lans_cnt;
  std::vector<int>  lans(current_lans_cnt);

  for (size_t idx = 0; idx < lans.size(); ++idx)
    std::cin >> lans[idx];
  std::cout << get_max_cut_lan_length(lans, needed_lans_cnt);
  return 0;
}
