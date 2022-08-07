/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25304.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:25:50 by jihoolee          #+#    #+#             */
/*   Updated: 2022/08/07 18:31:07 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  int total_price;
  int product_cnt;
  int price;
  int quantity;
  int sum = 0;

  std::cin >> total_price;
  std::cin >> product_cnt;
  for (int i = 0; i < product_cnt; ++i) {
    std::cin >> price >> quantity;
    sum += price * quantity;
  }
  if (total_price == sum)
    std::cout << "Yes";
  else
    std::cout << "No";
  return 0;
}
