/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1269.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:57:38 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/18 12:01:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>

int main(void) {
  int           a_len, b_len;
  std::set<int> a;
  int           num;
  int           mutual_size = 0;

  std::cin >> a_len >> b_len;
  for (int i = 0; i < a_len; ++i) {
    std::cin >> num;
    a.insert(num);
  }
  for (int i = 0; i < b_len; ++i) {
    std::cin >> num;
    if (a.count(num))
      ++mutual_size;
  }
  std::cout << a_len - mutual_size + b_len - mutual_size;
  return 0;
}
