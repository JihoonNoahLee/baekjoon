/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2525.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:41:48 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/01 22:57:50 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class timer {
 public:
  timer(void) : hour_(0), min_(0) {}
  timer(int hour, int min) : hour_(hour), min_(min) {}
  virtual ~timer() {}

  void get_endtime(int min) {
    min_ += min;
    hour_ += min_ / 60;
    min_ %= 60;
    hour_ %= 24;
  }

  friend std::ostream& operator<<(std::ostream&, const timer&);

 private:
  int hour_;
  int min_;
};

std::ostream& operator<<(std::ostream& os, const timer& t){
  os << t.hour_ << ' ' << t.min_;
  return os;
}

int main(void) {
  int h_begin, m_begin, duration;
  std::cin >> h_begin >> m_begin >> duration;
  timer t(h_begin, m_begin);

  t.get_endtime(duration);
  std::cout << t;
  return 0;
}
