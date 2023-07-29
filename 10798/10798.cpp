/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10798.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:25:54 by jihoolee          #+#    #+#             */
/*   Updated: 2023/06/19 21:43:28 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

const int WORD_CNT = 5;
const int MAX_WORD_LEN = 15;

void get_input(std::vector<std::string>* board) {
  for (int i = 0; i < WORD_CNT; ++i)
    std::cin >> board->at(i);
}

int main(void) {
  std::vector<std::string>  board(WORD_CNT);

  get_input(&board);
  for (int idx = 0; idx < MAX_WORD_LEN; ++idx) {
    for (int word_idx = 0; word_idx < WORD_CNT; ++word_idx) {
      try {
        std::cout << board[word_idx].at(idx);
      } catch (std::out_of_range& oor) {
        continue;
      }
    }
  }
  return 0;
}
