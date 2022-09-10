/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3036.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:48:15 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/10 12:25:18 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int get_gcd(int a, int b) {
  if (b == 0)
    return a;
  return get_gcd(b, a % b);
}

void print_rotation(int unit_ring, int ring) {
  int gcd = get_gcd(unit_ring, ring);

  std::cout << unit_ring / gcd << '/' << ring / gcd << '\n';
}

int main(void) {
  int ring_cnt;
  int unit_ring;
  int ring;

  std::cin >> ring_cnt >> unit_ring;
  for (int i = 1; i < ring_cnt; ++i) {
    std::cin >> ring;
    print_rotation(unit_ring, ring);
  }
  return 0;
}
