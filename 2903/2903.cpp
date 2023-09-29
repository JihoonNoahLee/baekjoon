/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2903.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:54:39 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/29 14:59:08 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const int k0 = 2;

int main(void) {
  int n;
  int k = k0;

  std::cin >> n;
  for (int iter = 0; iter < n; ++iter)
    k = k * 2 - 1;
  std::cout << k * k;
  return 0;
}
