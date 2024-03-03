/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2346.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:20:55 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/03 13:21:41 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>
#include <utility>

void get_input(std::deque<std::pair<int, int> >* d) {
  int cnt;
  int num;

  std::cin >> cnt;
  for (int i = 0; i < cnt; ++i) {
    std::cin >> num;
    d->push_back(std::make_pair(i + 1, num));
  }
}

void rotate_deque(std::deque<std::pair<int, int> >* d, int rotation) {
  if (rotation > 0) {
    for (int i = 0; i < rotation - 1; ++i) {
      d->push_back(d->front());
      d->pop_front();
    }
  } else {
    for (int i = 0; i > rotation; --i) {
      d->push_front(d->back());
      d->pop_back();
    }
  }
}

int main(void) {
  std::deque<std::pair<int, int> >  d;
  int                               rotation;

  get_input(&d);
  do {
    std::cout << d.front().first << ' ';
    rotation = d.front().second;
    d.pop_front();
    rotate_deque(&d, rotation);
  } while (!d.empty());
  return 0;
}
