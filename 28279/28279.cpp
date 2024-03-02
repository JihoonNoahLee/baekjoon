/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   28279.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:26:29 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/02 15:40:35 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

void do_cmd(std::deque<int>* p_d, int cmd) {
  int num;

  switch (cmd) {
    case 1:
      std::cin >> num;
      p_d->push_front(num);
      break;
    case 2:
      std::cin >> num;
      p_d->push_back(num);
      break;
    case 3:
      std::cout << pop_front_deque(p_d) << '\n';
      break;
    case 4:
      std::cout << pop_back_deque(p_d) << '\n';
      break;
    case 5:
      std::cout << p_d->size() << '\n';
      break;
    case 6:
      std::cout << int(p_d->empty()) << '\n';
      break;
    case 7:
      std::cout << get_front_deque(p_d) << '\n';
      break;
    case 8:
      std::cout << get_back_deque(p_d) << '\n';
      break;
  }
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int             cmd_cnt;
  int             cmd;
  std::deque<int> d;

  std::cin >> cmd_cnt;
  for (int i = 0; i < cmd_cnt; ++i) {
    std::cin >> cmd;
    do_cmd(&d, cmd);
  }
  return 0;
}
