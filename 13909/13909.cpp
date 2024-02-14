/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13909.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:15:11 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/14 20:23:52 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int get_open_window_cnt(int num) {
  int cnt = 1;

  while (cnt * cnt <= num)
    ++cnt;
  return cnt - 1;
}

int main(void) {
  int cnt;

  std::cin >> cnt;
  std::cout << get_open_window_cnt(cnt);
  return 0;
}
