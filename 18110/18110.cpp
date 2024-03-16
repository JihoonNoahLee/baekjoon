/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18110.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:54:38 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/16 18:10:27 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <set>

const int PERCENTAGE = 30;

int get_trimmed_mean(const std::multiset<int>& scores, int percentage) {
  if (scores.empty())
    return 0;

  int   cutoff =
          std::round(static_cast<float>(scores.size()) * percentage / 200.);
  float result = 0;
  std::multiset<int>::const_iterator  end_it = scores.cend();
  std::multiset<int>::const_iterator  begin_it = scores.cbegin();

  for (int i = 0; i < cutoff; ++i) {
    ++begin_it;
    --end_it;
  }
  for (std::multiset<int>::const_iterator it = begin_it;
        it != end_it;
        ++it)
    result += *it;

  return round(result / (scores.size() - 2 * cutoff));
}

void get_input(std::multiset<int>* s) {
  int score_cnt;
  int num;

  std::cin >> score_cnt;
  for (int i = 0; i < score_cnt; ++i) {
    std::cin >> num;
    s->insert(num);
  }
}

int main(void) {
  std::multiset<int> scores;

  get_input(&scores);
  std::cout << get_trimmed_mean(scores, PERCENTAGE);
  return 0;
}
