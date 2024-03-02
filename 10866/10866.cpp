/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10866.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:07:59 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/02 16:11:36 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <deque>

int pop_front_deque(std::deque<int>* p_d) {
  if (p_d->empty())
    return -1;

  int result = p_d->front();

  p_d->pop_front();
  return result;
}

int pop_back_deque(std::deque<int>* p_d) {
  if (p_d->empty())
    return -1;

    int result = p_d->back();

    p_d->pop_back();
    return result;
}

int get_front_deque(std::deque<int>* p_d) {
  if (p_d->empty())
    return -1;
  return p_d->front();
}

int get_back_deque(std::deque<int>* p_d) {
  if (p_d->empty())
    return -1;
  return p_d->back();
}

void do_cmd(std::deque<int>* p_d, const std::string& cmd) {
  int num;

  if (cmd == "push_front") {
    std::cin >> num;
    p_d->push_front(num);
  } else if (cmd == "push_back") {
    std::cin >> num;
    p_d->push_back(num);
  } else if (cmd == "pop_front") {
    std::cout << pop_front_deque(p_d) << std::endl;
  } else if (cmd == "pop_back") {
    std::cout << pop_back_deque(p_d) << std::endl;
  } else if (cmd == "size") {
    std::cout << p_d->size() << std::endl;
  } else if (cmd == "empty") {
    std::cout << int(p_d->empty()) << std::endl;
  } else if (cmd == "front") {
    std::cout << get_front_deque(p_d) << std::endl;
  } else if (cmd == "back") {
    std::cout << get_back_deque(p_d) << std::endl;
  }
}

int main(void) {
  int             cmd_cnt;
  std::string     cmd;
  std::deque<int> d;

  std::cin >> cmd_cnt;
  for (int i = 0; i < cmd_cnt; ++i) {
    std::cin >> cmd;
    do_cmd(&d, cmd);
  }
  return 0;
}
