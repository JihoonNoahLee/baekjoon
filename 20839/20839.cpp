/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20839.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:47:56 by jihoolee          #+#    #+#             */
/*   Updated: 2022/04/15 15:03:24 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char get_lettergrade(int a, int c, int e, int* grade) {
  if (grade[0] >= a && grade[1] >= c && grade[2] >= e)
    return 'A';
  else if (2 * grade[0] >= a && grade[1] >= c && grade[2] >= e)
    return 'B';
  else if (grade[1] >= c && grade[2] >= e)
    return 'C';
  else if (2 * grade[1] >= c && grade[2] >= e)
    return 'D';
  else
    return 'E';
}

int main(void) {
  int a, c, e;
  int grade[3];

  std::cin >> a >> c >> e;
  for (int i = 0; i < 3; ++i)
    std::cin >> grade[i];
  std::cout << get_lettergrade(a, c, e, grade);
  return 0;
}
