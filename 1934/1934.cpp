/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1934.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:57:01 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/08 11:59:36 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int get_gcd(int a, int b) {
  if (b == 0)
    return a;
  return get_gcd(b, a % b);
}

int get_lcm(int a, int b) {
  int gcd = get_gcd(a, b);

  return a * b / gcd;
}

int main(void) {
  int cases;
  int a, b;

  std::cin >> cases;
  for (int i = 0; i < cases; ++i) {
    std::cin >> a >> b;
    std::cout << get_lcm(a, b) << std::endl;
  }
  return 0;
}
