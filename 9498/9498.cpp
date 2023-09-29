/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9498.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:42:01 by jihoolee          #+#    #+#             */
/*   Updated: 2023/09/29 11:31:15 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void) {
  int   score;
  char  grade;

  cin >> score;
  if (score >= 90 && score <= 100)
    grade = 'A';
  else if (score >= 80 && score < 90)
    grade = 'B';
  else if (score >= 70 && score < 80)
    grade = 'C';
  else if (score >= 60 && score < 70)
    grade = 'D';
  else
    grade = 'F';
  cout << grade;
  return 0;
}
