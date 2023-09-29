/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2563.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:37:30 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/29 13:24:44 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <utility>

const int PAPER_SIZE = 10;
const int CANVAS_SIZE = 100;

int count_covered_size(const std::vector<std::vector<bool> >& canvas) {
  int area = 0;

  for (int x_idx = 0; x_idx < CANVAS_SIZE; ++x_idx)
    for (int y_idx = 0; y_idx < CANVAS_SIZE; ++y_idx)
      if (canvas[x_idx][y_idx])
        area += 1;
  return area;
}

void cover_canvas(std::vector<std::vector<bool> >* p_canvas,
                  int x_coord, int y_coord) {
  std::vector<std::vector<bool> >& canvas = *p_canvas;

  for (int x_len = 0; x_len < PAPER_SIZE; ++x_len)
    for (int y_len = 0; y_len < PAPER_SIZE; ++y_len)
      canvas[x_coord + x_len][y_coord + y_len] = true;
}

void get_inputs(std::vector<std::pair<int, int> >* inputs) {
  int input_len;
  int x, y;

  std::cin >> input_len;
  inputs->resize(input_len);
  for (int idx = 0; idx < input_len; ++idx) {
    std::cin >> x >> y;
    inputs->at(idx) = std::pair<int, int>(x, y);
  }
}

int main(void) {
  std::vector<std::vector<bool> >
    canvas(CANVAS_SIZE, std::vector<bool>(CANVAS_SIZE, false));
  std::vector<std::pair<int, int> >
    inputs;

  get_inputs(&inputs);
  for (size_t idx = 0; idx < inputs.size(); ++idx)
    cover_canvas(&canvas, inputs[idx].first, inputs[idx].second);
  std::cout << count_covered_size(canvas);
  return 0;
}
