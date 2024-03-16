/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25192.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 23:59:25 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/17 00:08:18 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <set>

int main(void) {
  int                   input_cnt;
  std::string           str;
  std::set<std::string> users;
  int                   bear_emoji_cnt = 0;

  std::cin >> input_cnt;
  for (int i = 0; i < input_cnt; ++i) {
    std::cin >> str;
    if (str == "ENTER") {
      bear_emoji_cnt += users.size();
      users.clear();
    } else {
    users.insert(str);
    }
  }
  bear_emoji_cnt += users.size();
  std::cout << bear_emoji_cnt;
  return 0;
}
