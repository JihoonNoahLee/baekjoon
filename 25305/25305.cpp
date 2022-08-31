/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25305.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 03:02:11 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/01 03:17:38 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

bool order(int i1, int i2) {
  return (i1 > i2);
}

void input_scores(int len, std::vector<int>& scores) {
  scores.resize(len);
  for (int idx = 0; idx < len; ++idx) {
    std::cin >> scores[idx];
  }
}

int main(void) {
  int               len;
  int               rank;
  std::vector<int> scores;

  std::cin >> len >> rank;
  input_scores(len, scores);
  std::sort(scores.begin(), scores.end(), order);
  std::cout << scores[rank - 1];
  return 0;
}
