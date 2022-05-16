/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1764.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:51:21 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/16 18:16:33 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <set>

void print_havent_heard_nor_seen(int havent_seen_cnt,
                                  std::set<std::string>& havent_heard) {
  std::string name;
  std::set<std::string> havent_heard_nor_seen;
  int                   deutbo_cnt = 0;

  for (int i = 0; i < havent_seen_cnt; ++i) {
    std::cin >> name;
    if (havent_heard.count(name)) {
      havent_heard_nor_seen.insert(name);
      ++deutbo_cnt;
    }
  }
  std::cout << deutbo_cnt << '\n';
  for (std::set<std::string>::iterator it = havent_heard_nor_seen.begin();
        it != havent_heard_nor_seen.end();
        ++it) {
    std::cout << *it << '\n';
  }
}

void get_havent_heard_list(int havent_heard_cnt,
                            std::set<std::string>& havent_heard) {
  std::string name;

  for (int i = 0; i < havent_heard_cnt; ++i) {
    std::cin >> name;
    havent_heard.insert(name);
  }
}

int main(void) {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(nullptr);

  int                   havent_heard_cnt, havent_seen_cnt;
  std::set<std::string> havent_heard;

  std::cin >> havent_heard_cnt >> havent_seen_cnt;
  get_havent_heard_list(havent_heard_cnt, havent_heard);
  print_havent_heard_nor_seen(havent_seen_cnt, havent_heard);
  return 0;
}
