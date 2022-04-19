/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   23971.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:17:52 by jihoolee          #+#    #+#             */
/*   Updated: 2022/04/19 13:31:48 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int get_max_people(float H, float W, int N, int M) {
  return ceil(H / (N + 1)) * ceil(W / (M + 1));
}

int main(void) {
  int H, W, N, M;

  std::cin >> H >> W >> N >> M;
  std::cout << get_max_people(H, W, N, M);
  return 0;
}
