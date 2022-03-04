/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1181.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:41:10 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/04 14:10:04 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <set>

struct my_comp {
  bool operator()(const std::string& s1, const std::string& s2) const {
    if (s1.length() == s2.length())
      return s1 < s2;
    return s1.length() < s2.length();
  }
};

int main(void) {
  int len;
  std::cin >> len;
  std::string word;
  std::set<std::string, my_comp> words;

  for (int idx = 0; idx < len; ++idx) {
    std::cin >> word;
    words.insert(word);
  }
  for (std::set<std::string, my_comp>::iterator iter = words.begin();
      iter != words.end();
      ++iter)
    std::cout << *iter << '\n';
  return 0;
}
