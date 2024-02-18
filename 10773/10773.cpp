/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10773.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:29:02 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/18 14:36:03 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <numeric>

int get_sum(std::stack<int>* p_s) {
  int sum = 0;

  while (!p_s->empty()) {
    sum += p_s->top();
    p_s->pop();
  }
  return sum;
}

int main(void) {
  std::stack<int> s;
  int             num_cnt;
  int             num;

  std::cin >> num_cnt;
  for (int i = 0; i < num_cnt; ++i) {
    std::cin >> num;
    if (num == 0)
      s.pop();
    else
      s.push(num);
  }
  std::cout << get_sum(&s);
  return 0;
}
