/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2480.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:15:49 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/01 23:36:42 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int max(int a, int b, int c) {
  if (a > b && a > c) return a;
  else if (b > a && b > c) return b;
  else return c;
}

int main(void) {
  int a, b, c;
  int result;

  std::cin >> a >> b >> c;
  if (a == b && b == c)
    result = 10000 + a * 1000;
  else if (a != b && b != c && c != a)
    result = 100 * max(a, b, c);
  else {
    if (a == b) result = 1000 + a * 100;
    else if (b == c) result = 1000 + b * 100;
    else if (c == a) result = 1000 + c * 100;
  }
  std::cout << result;
  return 0;
}
