/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10828.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:19:43 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/25 19:11:09 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>

int pop_stack(std::stack<int>* s) {
  if (s->empty())
    return -1;
  int result = s->top();

  s->pop();
  return result;
}

void print_top(std::stack<int>* s) {
  if (s->empty())
    std::cout << -1 << '\n';
  else
    std::cout << s->top() << '\n';
}

void do_cmd(std::stack<int>* s, const std::string& cmd) {
  int num;

  if (cmd == "push") {
    std::cin >> num;
    s->push(num);
  } else if (cmd == "pop") {
    std::cout << pop_stack(s) << '\n';
  } else if (cmd == "size") {
    std::cout << s->size() << '\n';
  } else if (cmd == "empty") {
    std::cout << int(s->empty()) << '\n';
  } else if (cmd == "top") {
    print_top(s);
  }
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int             cmd_cnt;
  std::string     cmd;
  std::stack<int> s;

  std::cin >> cmd_cnt;
  for (int i = 0; i < cmd_cnt; ++i) {
    std::cin >> cmd;
    do_cmd(&s, cmd);
  }
  return 0;
}
