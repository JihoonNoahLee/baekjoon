/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7785.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:49:51 by jihoolee          #+#    #+#             */
/*   Updated: 2023/10/30 22:23:32 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <set>
#include <string>

void  handle_entry_exit(std::set<std::string>* p_present_workers) {
  std::set<std::string>&  present_workers = *p_present_workers;
  std::string             name;
  std::string             info;

  std::cin >> name >> info;
  if (info == "enter")
    present_workers.insert(name);
  else
    present_workers.erase(name);
}

int main(void) {
  int                   input_cnt;
  std::set<std::string> present_workers;

  std::cin >> input_cnt;
  for (int i = 0; i < input_cnt; ++i)
    handle_entry_exit(&present_workers);
  for (std::set<std::string>::const_reverse_iterator it =
          present_workers.crbegin();
        it != present_workers.crend();
        ++it)
    std::cout << *it << '\n';
  return 0;
}
