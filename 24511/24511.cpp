/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   24511.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:55:02 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/10 13:55:24 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>

void get_input(std::deque<int>* questack) {
  int len;
  int num;

  std::cin >> len;

  std::vector<int>  s_q(len);

  for (int idx = 0; idx < len; ++idx) {
    std::cin >> num;
    s_q[idx] = num;
  }
  for (int idx = 0; idx < len; ++idx) {
    std::cin >> num;
    if (s_q[idx] == 0)
      questack->push_front(num);
  }
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::deque<int> questack;
  int             input_cnt;
  int             num;

  get_input(&questack);
  std::cin >> input_cnt;
  for (int i = 0; i < input_cnt; ++i) {
    std::cin >> num;
    questack.push_back(num);
    std::cout << questack.front() << ' ';
    questack.pop_front();
  }
  return 0;
}
