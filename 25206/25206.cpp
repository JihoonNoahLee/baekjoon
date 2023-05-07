/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25206.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:07:50 by jihoolee          #+#    #+#             */
/*   Updated: 2023/05/07 18:40:47 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>

const int SUBJECT_CNT = 20;

float calc_gpa(const std::vector<std::pair<float, std::string> >& grades) {
  float                               grade_sum = 0.;
  float                               credit_sum = 0.;
  const std::map<std::string, float>  MARK_STANDARD = {
    std::make_pair(std::string("A+"), 4.5),
    std::make_pair(std::string("A0"), 4.0),
    std::make_pair(std::string("B+"), 3.5),
    std::make_pair(std::string("B0"), 3.0),
    std::make_pair(std::string("C+"), 2.5),
    std::make_pair(std::string("C0"), 2.0),
    std::make_pair(std::string("D+"), 1.5),
    std::make_pair(std::string("D0"), 1.0),
    std::make_pair(std::string("F"), 0.0)
  };

  for (size_t idx = 0; idx < SUBJECT_CNT; ++idx) {
    if (grades[idx].second == "P")
      continue;
    credit_sum += grades[idx].first;
    grade_sum += grades[idx].first * MARK_STANDARD.at(grades[idx].second);
  }
  return grade_sum / credit_sum;
}

int main(void) {
  std::vector<std::pair<float, std::string> > grades(SUBJECT_CNT);

  for (int i = 0; i < SUBJECT_CNT; ++i) {
    std::string subject;
    float       credit;
    std::string grade;

    std::cin >> grade >> credit >> grade;
    grades[i] = std::make_pair(credit, grade);
  }
  std::cout << calc_gpa(grades);
  return 0;
}
