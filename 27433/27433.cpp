/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   27433.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:58:48 by jihoolee          #+#    #+#             */
/*   Updated: 2024/04/21 15:02:07 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int64_t factorial(int N) {
  if (N == 0)
    return 1;
  else
    return N * factorial(N - 1);
}

int main(void) {
  int N;

  std::cin >> N;
  std::cout << factorial(N);
  return 0;
}
