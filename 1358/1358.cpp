/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1358.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:19:53 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/07 12:52:20 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool is_in_circle(int c_x, int c_y, int x, int y, int radius) {
  if ((c_x - x) * (c_x - x) + (c_y - y) * (c_y - y) <= radius * radius)
    return true;
  return false;
}

bool is_in_left_semicircle(int center_x, int center_y, int radius,
                            int player_x, int player_y) {
  if ((player_x <= center_x)
        && (is_in_circle(center_x, center_y, player_x, player_y, radius)))
    return true;
  return false;
}

bool is_in_right_semicircle(int center_x, int center_y, int radius,
                            int player_x, int player_y) {
  if ((player_x >= center_x)
        && (is_in_circle(center_x, center_y, player_x, player_y, radius)))
    return true;
  return false;
}

bool is_in_rectangle(int x, int y, int width, int height, int player_x, int player_y) {
  if ((player_x >= x && player_x <= x + width) && (player_y >= y && player_y <= y + height))
    return true;
  return false;
}

int get_in_player_cnt(int width, int height, int x, int y, int player_cnt) {
  int player_x;
  int player_y;
  int inside_cnt = 0;

  for (int player_i = 0; player_i < player_cnt; ++player_i) {
    std::cin >> player_x >> player_y;
    if (is_in_left_semicircle(x, y + height / 2, height / 2, player_x, player_y)
      || is_in_right_semicircle(x + width, y + height / 2, height / 2, player_x, player_y)
      || is_in_rectangle(x, y, width, height, player_x, player_y))
      ++inside_cnt;
  }
  return inside_cnt;
}

int main(void) {
  int w, h, x, y, p;

  std::cin >> w >> h >> x >> y >> p;
  std::cout << get_in_player_cnt(w, h, x, y, p);
  return 0;
}
