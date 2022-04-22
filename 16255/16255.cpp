/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16255.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:05:16 by jihoolee          #+#    #+#             */
/*   Updated: 2022/04/22 15:56:46 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int max(int x, int y) {
  if (x > y)
    return x;
  return y;
}

int get_min_ballcount(int k, int x, int y) {
  if (x >= k)
    return 2 - (x - y);
  else if (y + 2 >= k)
    return y + 2 - x;
  else
    return k - x;
}

int main(void) {
  int n_cases;
  int k, x, y;

  std::cin >> n_cases;
  for (int i = 0; i < n_cases; ++i) {
    std::cin >> k >> x >> y;
    std::cout << get_min_ballcount(k, max(x, y), x + y - max(x, y)) << std::endl;
  }
  return 0;
}
