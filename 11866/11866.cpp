/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11866.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 22:17:35 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/01 22:46:59 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <queue>

void rotate_queue(std::queue<int>* p_q) {
  int front = p_q->front();

  p_q->pop();
  p_q->push(front);
}

void print_josephus(int n, int k) {
  std::queue<int> q;

  for (int num = 1; num <= n; ++num)
    q.push(num);
  std::cout << '<';
  while (!q.empty()) {
    for (int i = 0; i < k - 1; ++i)
      rotate_queue(&q);
    std::cout << q.front();
    q.pop();
    if (!q.empty())
      std::cout << ", ";
  }
  std::cout << '>';
}

int main(void) {
  int n;
  int k;

  std::cin >> n >> k;
  print_josephus(n, k);
  return 0;
}
