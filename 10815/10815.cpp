/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10815.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:33:40 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/11 12:50:56 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>

void print_isin(std::set<int>& num_set) {
  int                     len, num;

  std::cin >> len;
  for (int i = 0; i < len; ++i) {
    std::cin >> num;
    std::cout << num_set.count(num) << ' ';
  }
}

void get_set_input(std::set<int>& num_set) {
  int len, num;

  std::cin >> len;
  for (int i = 0; i < len; ++i) {
    std::cin >> num;
    num_set.insert(num);
  }
}

int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::set<int> num_set;

  get_set_input(num_set);
  print_isin(num_set);
  return 0;
}
