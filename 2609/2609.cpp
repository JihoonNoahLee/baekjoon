/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2609.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:47:08 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/08 11:51:23 by jihoolee         ###   ########.fr       */
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
  int a, b;

  std::cin >> a >> b;
  std::cout << get_gcd(a, b) << std::endl;
  std::cout << get_lcm(a, b) << std::endl;
  return 0;
}
