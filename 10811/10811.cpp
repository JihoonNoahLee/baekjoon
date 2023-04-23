/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10811.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:35:41 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/23 12:34:33 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
  int basket_cnt;
  int move_cnt;
  std::cin >> basket_cnt >> move_cnt;
  std::vector<int>  baskets(basket_cnt);

  for (size_t idx = 0; idx < basket_cnt; ++idx)
    baskets[idx] = idx + 1;
  for (int move_i = 0; move_i < move_cnt; ++move_i) {
    int i, j;

    std::cin >> i >> j;
    std::reverse(baskets.begin() + i - 1, baskets.begin() + j);
  }
  for (std::vector<int>::const_iterator it = baskets.cbegin();
        it != baskets.cend();
        ++it)
    std::cout << *it << ' ';
  return 0;
}
