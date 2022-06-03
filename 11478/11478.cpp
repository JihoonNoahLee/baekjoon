/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11478.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:05:30 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/19 12:14:52 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <set>

int main(void) {
  std::string           str;
  std::set<std::string> substr;

  std::cin >> str;
  for (int size = 1; size <= str.length(); ++size) {
    for (int idx = 0; idx + size <= str.length(); ++idx)
      substr.insert(str.substr(idx, size));
  }
  std::cout << substr.size();
  return 0;
}
