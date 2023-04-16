/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10810.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:26:06 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/16 18:48:20 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int main(void) {
  int               total_iter;
  int               basket_cnt;
  std::cin >> basket_cnt >> total_iter;
  std::vector<int>  baskets(basket_cnt, 0);

  for (int iter = 0; iter < total_iter; ++iter) {
    int min_idx, max_idx, num;

    std::cin >> min_idx >> max_idx >> num;
    for (int idx = min_idx - 1; idx < max_idx; ++idx)
      baskets[idx] = num;
  }
  for (std::vector<int>::const_iterator it = baskets.begin();
        it != baskets.end();
        ++it)
    std::cout << *it << ' ';
  return 0;
}
