/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11650.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 23:01:39 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/02 23:20:42 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main(void) {
  int len;
  std::cin >> len;
  std::vector<std::pair<int, int> > vec(len);
  int first, second;

  for (int i = 0; i < len; ++i) {
    std::cin >> first >> second;
    vec[i] = std::pair<int, int>(first, second);
  }
  std::sort(vec.begin(), vec.end());
  for (int i = 0; i < len; ++i) {
    std::cout << vec[i].first << " " << vec[i].second << '\n';
  }
  return 0;
}
