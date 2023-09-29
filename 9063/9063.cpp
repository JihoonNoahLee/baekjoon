/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9063.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 02:21:48 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/30 02:28:46 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

void get_inputs(int input_cnt,
                std::vector<int>* x_coords, std::vector<int>* y_coords) {
  for (int idx = 0; idx < input_cnt; ++idx)
    std::cin >> x_coords->at(idx) >> y_coords->at(idx);
}

int main(void) {
  int               input_cnt;
  std::cin >> input_cnt;
  std::vector<int>  x_coords(input_cnt);
  std::vector<int>  y_coords(input_cnt);

  get_inputs(input_cnt, &x_coords, &y_coords);
  std::sort(x_coords.begin(), x_coords.end());
  std::sort(y_coords.begin(), y_coords.end());
  std::cout << (x_coords[input_cnt - 1] - x_coords[0]) *
                (y_coords[input_cnt - 1] - y_coords[0]);
  return 0;
}
