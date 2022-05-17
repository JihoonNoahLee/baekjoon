/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3034.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:16:30 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/17 22:23:12 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

float get_diag_len(float w, float h) {
  return sqrt(w * w + h * h);
}

int main(void) {
  int match_cnt, match_len;
  int w, h;

  std::cin >> match_cnt >> w >> h;

  float max_len = get_diag_len(w, h);

  for (int i = 0; i < match_cnt; ++i) {
    std::cin >> match_len;
    if (match_len > max_len)
      std::cout << "NE";
    else
      std::cout << "DA";
    std::cout << '\n';
  }
  return 0;
}
