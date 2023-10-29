/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   24267.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:19:24 by jihoolee          #+#    #+#             */
/*   Updated: 2023/10/29 21:53:55 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

int main(void) {
  int n;

  std::cin >> n;
  std::cout << static_cast<int64_t>(n) * (n - 1) * (n - 2) / 6 << std::endl;
  std::cout << 3;
  return 0;
}
