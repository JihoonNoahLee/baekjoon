/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10812.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 12:07:05 by jihoolee          #+#    #+#             */
/*   Updated: 2023/05/07 13:39:56 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

void rotate_baskets(std::vector<int>* baskets, int begin, int end, int mid) {
  std::vector<int>::iterator  begin_it = baskets->begin() + begin - 1;
  std::vector<int>::iterator  end_it = baskets->begin() + end - 1;
  std::vector<int>::iterator  mid_it = baskets->begin() + mid - 1;
  std::vector<int>            swapped(end - begin + 1);

  std::copy(mid_it, end_it + 1, swapped.begin());
  std::copy(begin_it, mid_it, swapped.begin() + end - mid + 1);
  std::copy(swapped.begin(), swapped.end(), begin_it);
}

int main(void) {
  int baskets_cnt;
  int input_cnt;
  std::cin >> baskets_cnt >> input_cnt;
  std::vector<int>  baskets(baskets_cnt);

  for (size_t idx = 0; idx < baskets_cnt; ++idx)
    baskets[idx] = idx + 1;
  for (int i = 0; i < input_cnt; ++i) {
    int begin, end, mid;

    std::cin >> begin >> end >> mid;
    rotate_baskets(&baskets, begin, end, mid);
  }
  for (std::vector<int>::const_iterator it = baskets.cbegin();
        it != baskets.cend();
        ++it)
    std::cout << *it << ' ';
  return 0;
}
