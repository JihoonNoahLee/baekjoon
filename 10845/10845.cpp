/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10845.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:36:19 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/01 16:51:14 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <queue>

int front_queue(std::queue<int>* p_q) {
  if (p_q->empty())
    return -1;
  return p_q->front();
}

int back_queue(std::queue<int>* p_q) {
  if (p_q->empty())
    return -1;
  return p_q->back();
}

int pop_queue(std::queue<int>* p_q) {
  if (p_q->empty())
    return -1;

  int popped = p_q->front();

  p_q->pop();
  return popped;
}

void do_cmd(const std::string& cmd, std::queue<int>* p_q) {
  if (cmd == "push") {
    int num;
    std::cin >> num;
    p_q->push(num);
  } else if (cmd == "pop") {
    std::cout << pop_queue(p_q) << std::endl;
  } else if (cmd == "size") {
    std::cout << p_q->size() << std::endl;
  } else if (cmd == "empty") {
    std::cout << int(p_q->empty()) << std::endl;
  } else if (cmd == "front") {
    std::cout << front_queue(p_q) << std::endl;
  } else if (cmd == "back") {
    std::cout << back_queue(p_q) << std::endl;
  }
}

int main(void) {
  int             cmd_cnt;
  std::string     cmd;
  std::queue<int> q;

  std::cin >> cmd_cnt;
  for (int i = 0; i < cmd_cnt; ++i) {
    std::cin >> cmd;
    do_cmd(cmd, &q);
  }
  return 0;
}
