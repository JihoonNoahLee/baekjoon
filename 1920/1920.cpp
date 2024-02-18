/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1920.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:45:52 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/18 14:56:50 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int           set_cnt;
  std::set<int> s;
  int           case_cnt;
  int           num;

  std::cin >> set_cnt;
  for (int i = 0; i < set_cnt; ++i) {
    std::cin >> num;
    s.insert(num);
  }
  std::cin >> case_cnt;
  for (int i = 0; i < case_cnt; ++i) {
    std::cin >> num;
    if (s.find(num) != s.end())
      std::cout << "1\n";
    else
      std::cout << "0\n";
  }
  return 0;
}
