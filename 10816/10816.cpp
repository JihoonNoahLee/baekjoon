/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10816.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:23:49 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/14 22:46:23 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>

int get_card_count(int card_num, std::map<int, int>& cards) {
  std::map<int, int>::iterator it = cards.find(card_num);

  if (it == cards.end())
    return 0;
  return it->second;
}

void check_cards(std::map<int, int>& cards) {
  int case_len;
  int num_input;

  std::cin >> case_len;
  for (int i = 0; i < case_len; ++i) {
    std::cin >> num_input;
    std::cout << get_card_count(num_input, cards) << ' ';
  }
}

void get_card_input(std::map<int, int>& cards) {
  int cards_count;
  int num_input;

  std::cin >> cards_count;
  for (int i = 0; i < cards_count; ++i) {
    std::cin >> num_input;
    if (cards.count(num_input))
      ++cards[num_input];
    else
      cards.insert(std::map<int, int>::value_type(num_input, 1));
  }
}

int main(void) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  std::map<int, int>  cards;

  get_card_input(cards);
  check_cards(cards);
  return 0;
}
