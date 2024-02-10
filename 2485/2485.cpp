/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2485.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:53:26 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/11 00:34:34 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int get_gcd(int num1, int num2) {
  if (num2 == 0)
    return num1;
  return get_gcd(num2, num1 % num2);
}

int get_gcd(const std::vector<int>& vec) {
  int gcd = vec[0];

  for (size_t idx = 1; idx < vec.size(); ++idx)
    gcd = get_gcd(gcd, vec[idx]);
  return gcd;
}

void get_input(std::vector<int>* trees) {
  int coord;

  for (std::vector<int>::iterator it = trees->begin();
        it != trees->end();
        ++it) {
    std::cin >> coord;
    *it = coord;
  }
}

int main(void) {
  int tree_cnt;
  std::cin >> tree_cnt;
  std::vector<int>  trees(tree_cnt);

  get_input(&trees);
  std::vector<int>  tree_intervals(tree_cnt - 1);
  int               interval_gcd;
  int               result = 0;

  for (int tree_idx = 0; tree_idx + 1 < tree_cnt; ++tree_idx)
    tree_intervals[tree_idx] = trees[tree_idx + 1] - trees[tree_idx];
  interval_gcd = get_gcd(tree_intervals);
  for (size_t idx = 0; idx < tree_intervals.size(); ++idx)
    result += tree_intervals[idx] / interval_gcd - 1;
  std::cout << result;
  return 0;
}
