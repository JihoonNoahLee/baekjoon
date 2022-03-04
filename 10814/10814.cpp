/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10814.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:56:31 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/04 18:26:38 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>

typedef std::pair<int, std::string> info;

struct comp_age{
  bool operator()(const info& p1, const info& p2) const {
    return p1.first < p2.first;
  }
};

int main(void) {
  int len;
  std::cin >> len;
  std::vector<info> people(len);
  int         age;
  std::string name;

  for (int idx = 0; idx < len; ++idx) {
    std::cin >> age >> name;
    people[idx] = std::make_pair(age, name);
  }
  std::stable_sort(people.begin(), people.end(), comp_age());
  for (int idx = 0; idx < len; ++idx)
    std::cout << people[idx].first << ' ' << people[idx].second << '\n';
  return 0;
}
