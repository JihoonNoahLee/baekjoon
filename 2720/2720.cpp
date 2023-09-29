/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2720.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:23:48 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/29 14:34:12 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_change(int cents) {
  const int QUARTER_COST = 25;
  const int DIME_COST = 10;
  const int NICKEL_COST = 5;
  // const int PENNY_COST = 1;
  int quarter;
  int dime;
  int nickel;
  int penny;

  quarter = cents / QUARTER_COST;
  cents %= QUARTER_COST;
  dime = cents / DIME_COST;
  cents %= DIME_COST;
  nickel = cents / NICKEL_COST;
  cents %= NICKEL_COST;
  penny = cents;
  std::cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny
    << std::endl;
}

int main(void) {
  int cases_cnt = 0;
  int cents;

  std::cin >> cases_cnt;
  for (int i = 0; i < cases_cnt; ++i) {
    std::cin >> cents;
    print_change(cents);
  }
  return 0;
}
