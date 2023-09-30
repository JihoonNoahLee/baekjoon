/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14215.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:48:06 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/30 14:51:42 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

const int SIDES_CNT = 3;

int main(void) {
  std::vector<int>  sides(SIDES_CNT);

  for (int idx = 0; idx < SIDES_CNT; ++idx)
    std::cin >> sides[idx];
  std::sort(sides.begin(), sides.end());
  if (sides[2] >= sides[0] + sides[1])
    sides[2] = sides[0] + sides[1] - 1;
  std::cout << sides[0] + sides[1] + sides[2];
  return 0;
}
