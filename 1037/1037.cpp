/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1037.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:45:18 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/09 13:38:06 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>

int main(void) {
  int           factor_num;
  int           factor;
  std::set<int> factors;

  std::cin >> factor_num;
  for (int i = 0; i < factor_num; ++i) {
    std::cin >> factor;
    factors.insert(factor);
  }
  std::cout << (*factors.begin()) * (*(--factors.end()));
  return 0;
}
