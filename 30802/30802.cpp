/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   30802.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:48:51 by jihoolee          #+#    #+#             */
/*   Updated: 2024/07/13 17:04:32 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

const int SIZE_CNT = 6;

void get_input(int* p_n, std::vector<int>* p_t, int* m_t, int* m_p) {
  std::cin >> *p_n;

  for (int idx = 0; idx < SIZE_CNT; ++idx) {
    int num;

    std::cin >> num;
    p_t->at(idx) = num;
  }
  std::cin >> *m_t >> *m_p;
}

int main(void) {
  int               total_people;
  std::vector<int>  tshirt_cnt(SIZE_CNT);
  int               min_tshirt;
  int               min_pen;
  int               total_tshirt_binds = 0;

  get_input(&total_people, &tshirt_cnt, &min_tshirt, &min_pen);
  for (int idx = 0; idx < SIZE_CNT; ++idx) {
    total_tshirt_binds += tshirt_cnt[idx] / min_tshirt;
    if (tshirt_cnt[idx] % min_tshirt)
      total_tshirt_binds += 1;
  }
  std::cout << total_tshirt_binds << std::endl;
  std::cout << total_people / min_pen << ' ' << total_people % min_pen;
  return 0;
}
