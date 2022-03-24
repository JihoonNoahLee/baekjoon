/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9663.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:21:53 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/24 22:48:41 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

bool is_valid(std::vector<int>& board, int depth, int pos) {
  for (size_t y = 0; y < depth; ++y)
    if (pos == board[y])
      return false;
  for (size_t x = 1; x <= depth; ++x)
    if (pos - x == board[depth - x] || pos + x == board[depth - x])
      return false;
  return true;
}

void place_queens(std::vector<int>& board, int depth, int& possibilities) {
  if (depth == board.size()) {
    ++possibilities;
    return;
  }
  for (size_t pos = 0; pos < board.size(); ++pos) {
    if (is_valid(board, depth, pos)) {
      board[depth] = pos;
      place_queens(board, depth + 1, possibilities);
    }
  }
}

int n_queens(int n) {
  std::vector<int>  board(n, 0);
  int               possibilities = 0;

  place_queens(board, 0, possibilities);
  return possibilities;
}

int main(void) {
  int n;

  std::cin >> n;
  std::cout << n_queens(n);
  return 0;
}
