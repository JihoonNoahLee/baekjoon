/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18258.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:34:19 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/01 17:28:33 by jihoolee         ###   ########.fr       */
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
    std::cout << pop_queue(p_q) << '\n';
  } else if (cmd == "size") {
    std::cout << p_q->size() << '\n';
  } else if (cmd == "empty") {
    std::cout << int(p_q->empty()) << '\n';
  } else if (cmd == "front") {
    std::cout << front_queue(p_q) << '\n';
  } else if (cmd == "back") {
    std::cout << back_queue(p_q) << '\n';
  }
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

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
