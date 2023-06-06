/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2566.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:54:50 by jihoolee          #+#    #+#             */
/*   Updated: 2023/06/06 17:10:32 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const int SIZE = 9;

int main(void) {
  int max = 0;
  int max_row = 1, max_col = 1;
  int curr_num;

  for (int row = 0; row < SIZE; ++row) {
    for (int col = 0; col < SIZE; ++col) {
      std::cin >> curr_num;
      if (curr_num > max) {
        max = curr_num;
        max_row = row + 1;
        max_col = col + 1;
      }
    }
  }
  std::cout << max << std::endl << max_row << ' ' << max_col;
  return 0;
}
