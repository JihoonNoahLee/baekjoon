/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17103.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:09:42 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/13 20:33:29 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

const unsigned int  MAX_NUM = 1000000;
std::vector<bool>   is_prime(MAX_NUM + 1, true);

void eratos(void) {
  for (int i = 2; i * i <= MAX_NUM; ++i) {
    if (is_prime[i]) {
      for (int j = i * i; j <= MAX_NUM; j += i)
        is_prime[j] = false;
    }
  }
}

int get_goldbach_partition_count(int num) {
  int cnt = 0;

  for (int i = 2; i <= num / 2; ++i)
    if (is_prime[i] && is_prime[num - i])
      ++cnt;
  return cnt;
}

int main(void) {
  int case_cnt;
  int num;

  eratos();
  std::cin >> case_cnt;
  for (int i = 0; i < case_cnt; ++i) {
    std::cin >> num;
    std::cout << get_goldbach_partition_count(num) << std::endl;
  }
  return 0;
}
