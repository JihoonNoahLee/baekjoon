/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   28278.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:16:02 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/17 16:29:34 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

void do_cmd(std::stack<int>* s, int cmd) {
  std::stack<int>&  r_s = *s;
  int               num;

  switch (cmd) {
    case 1:
      std::cin >> num;
      s->push(num);
      break;
    case 2:
      std::cout << pop_stack(s) << '\n';
      break;
    case 3:
      std::cout << s->size() << '\n';
      break;
    case 4:
      std::cout << int(s->empty()) << '\n';
      break;
    case 5:
      print_top(s);
      break;
  }
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int             cmd_cnt;
  int             cmd;
  std::stack<int> s;

  std::cin >> cmd_cnt;
  for (int i = 0; i < cmd_cnt; ++i) {
    std::cin >> cmd;
    do_cmd(&s, cmd);
  }
  return 0;
}
