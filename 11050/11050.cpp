/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11050.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:29:41 by jihoolee          #+#    #+#             */
/*   Updated: 2022/06/03 15:37:53 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int sub_fact(int num, int len) {
  int result = 1;

  for (; len > 0; --len, --num)
    result *= num;
  return result;
}

int nCk(int n, int k) {
  return sub_fact(n, k) / sub_fact(k, k);
}

int main(void) {
  int n, k;

  std::cin >> n >> k;
  std::cout << nCk(n, k);
  return 0;
}
