/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12789.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:40:27 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/01 20:26:31 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <queue>
#include <stack>

void get_input(std::queue<int>* p_q) {
  int student_cnt;
  int num;

  std::cin >> student_cnt;
  for (int i = 0; i < student_cnt; ++i) {
    std::cin >> num;
    p_q->push(num);
  }
}

bool is_possible(std::queue<int>* q, std::stack<int>* s) {
  int turn = 1;
  int num;

  while (!q->empty()) {
    if (!s->empty()) {
      while (!s->empty() && s->top() == turn) {
        s->pop();
        ++turn;
      }
    }
    if (q->front() == turn) {
      q->pop();
      ++turn;
    } else {
      num = q->front();
      s->push(num);
      q->pop();
    }
  }
  while (!s->empty() && s->top() == turn) {
    s->pop();
    ++turn;
  }
  return s->empty();
}

int main(void) {
  std::queue<int> q;
  std::stack<int> s;

  get_input(&q);
  if (is_possible(&q, &s))
    std::cout << "Nice";
  else
    std::cout << "Sad";
  return 0;
}
