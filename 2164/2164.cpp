/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2164.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:29:28 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/01 21:41:46 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <queue>

int get_last_card(std::queue<int>* cards) {
  int discarded;
  int front;

  while (true) {
    discarded = cards->front();
    cards->pop();
    if (cards->empty())
      break;
    front = cards->front();
    cards->pop();
    cards->push(front);
  }
  return discarded;
}

int main(void) {
  int             card_cnt;
  std::queue<int> cards;

  std::cin >> card_cnt;
  for (int i = 1; i <= card_cnt; ++i)
    cards.push(i);
  std::cout << get_last_card(&cards);
  return 0;
}
