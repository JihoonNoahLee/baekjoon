/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3003.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:52:54 by jihoolee          #+#    #+#             */
/*   Updated: 2022/08/07 16:59:34 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#define SET_LEN 6

int main(void) {
  std::vector<int>  set = {1, 1, 2, 2, 2, 8};
  std::vector<int>  curr_set(SET_LEN);

  for (int i = 0; i < SET_LEN; ++i)
    std::cin >> curr_set[i];
  for (int i = 0; i < SET_LEN; ++i)
    std::cout << set[i] - curr_set[i] << ' ';
  return 0;
}
