/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10813.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 19:14:37 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/22 19:28:25 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
  int               move_cnt;
  int               basket_cnt;
  std::cin >> basket_cnt >> move_cnt;
  std::vector<int>  basket(basket_cnt);

  for (size_t idx = 0; idx < basket.size(); ++idx)
    basket[idx] = idx + 1;
  for (int move_i = 0; move_i < move_cnt; ++move_i) {
    int i, j;

    std::cin >> i >> j;
    std::swap(basket[i - 1], basket[j - 1]);
  }
  for (std::vector<int>::iterator it = basket.begin();
        it != basket.end();
        ++it)
    std::cout << *it << ' ';
  return 0;
}
