/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2444.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:19:45 by jihoolee          #+#    #+#             */
/*   Updated: 2023/05/06 17:25:17 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_line(int i, int N) {
  for (int idx = 0; idx < N - 1 - i; ++idx)
    std::cout << ' ';
  for (int idx = 0; idx < 2 * i + 1; ++idx)
    std::cout << '*';
  std::cout << '\n';
}

int main(void) {
  int N;

  std::cin >> N;
  for (int i = 0; i < N; ++i)
    print_line(i, N);
  for (int i = N - 2; i >= 0; --i)
    print_line(i, N);
  return 0;
}
