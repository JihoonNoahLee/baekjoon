/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14425.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:59:49 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/11 13:07:00 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <string>

void get_set_input(int set_len, std::set<std::string>& str_set) {
  std::string str;

  for (int i = 0; i < set_len; ++i) {
    std::cin >> str;
    str_set.insert(str);
  }
}

int get_overlap_str(int test_cases, std::set<std::string>& str_set) {
  std::string test_str;
  int         count = 0;

  for (int i = 0; i < test_cases; ++i) {
    std::cin >> test_str;
    if (str_set.count(test_str) != 0)
      ++count;
  }
  return count;
}

int main(void) {
  int                   set_len, test_cases;
  std::set<std::string> str_set;

  std::cin >> set_len >> test_cases;
  get_set_input(set_len, str_set);
  std::cout << get_overlap_str(test_cases, str_set);
  return 0;
}
