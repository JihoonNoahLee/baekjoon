/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1676.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:39:25 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/10 15:06:56 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int cnt_trail_0(int num) {
  int divisor = 5;
  int count = 0;

  while (divisor <= num) {
    count += num / divisor;
    divisor *= 5;
  }
  return count;
}

int main(void) {
  int num;

  std::cin >> num;
  std::cout << cnt_trail_0(num);
  return 0;
}
