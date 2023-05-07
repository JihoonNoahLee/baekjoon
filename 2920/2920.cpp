/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2920.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:05:13 by jihoolee          #+#    #+#             */
/*   Updated: 2023/05/07 21:07:01 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

const int LEN = 8;

int main(void) {
  std::vector<int>  arr(LEN);
  int               asc = 0;
  int               desc = 0;

  for (size_t idx = 0; idx < LEN; ++idx)
    std::cin >> arr[idx];
  for (size_t idx = 0; idx < LEN / 2; ++idx) {
    if (arr[idx] + arr[LEN - 1 - idx] != LEN + 1)
      break;
    else if (arr[idx] < arr[idx + 1])
      ++asc;
    else if (arr[idx] > arr[idx + 1])
      ++desc;
  }
  if (asc == 4)
    std::cout << "ascending";
  else if (desc == 4)
    std::cout << "descending";
  else
    std::cout << "mixed";
  return 0;
}
