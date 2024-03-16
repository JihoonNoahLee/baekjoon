/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   26069.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:20:52 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/17 00:27:18 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <set>

int main(void) {
  int                   input_cnt;
  std::set<std::string> rainbow_dancers;
  std::string           name1, name2;

  rainbow_dancers.insert("ChongChong");
  std::cin >> input_cnt;
  for (int i = 0; i < input_cnt; ++i) {
    std::cin >> name1 >> name2;
    if (rainbow_dancers.find(name1) != rainbow_dancers.end())
      rainbow_dancers.insert(name2);
    else if (rainbow_dancers.find(name2) != rainbow_dancers.end())
      rainbow_dancers.insert(name1);
  }
  std::cout << rainbow_dancers.size();
  return 0;
}
