/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11651.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:15:26 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/03 23:23:08 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

struct myclass {
  bool operator() (std::pair<int, int> lhs, std::pair<int, int> rhs) {
    if (lhs.second == rhs.second)
      return lhs.first < rhs.first;
    return lhs.second < rhs.second;
  }
} my_comp;

int main(void) {
  int len;
  std::cin >> len;
  std::vector<std::pair<int, int> >  vec(len);
  int x, y;

  for (int idx = 0; idx < len; ++idx) {
    std::cin >> x >> y;
    vec[idx] = std::make_pair(x, y);
  }
  std::sort(vec.begin(), vec.end(), my_comp);
  for (int idx = 0; idx < len; ++idx)
    std::cout << vec[idx].first << ' ' << vec[idx].second << '\n';
  return 0;
}
