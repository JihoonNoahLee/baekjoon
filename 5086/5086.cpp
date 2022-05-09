/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5086.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:08:22 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/09 12:31:56 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

enum cases {
  NONE = 0,
  FACTOR = 1,
  MULTIPLE = 2
};

int is_factor(int a, int b) {
  if (b % a == 0)
    return FACTOR;
  return NONE;
}

int is_multiple(int a, int b) {
  if (a % b == 0)
    return MULTIPLE;
  return NONE;
}

int main(void) {
  int a, b;
  int flag;

  std::cin >> a >> b;
  while (a && b) {
    flag = (0 | is_factor(a, b) | is_multiple(a, b));
    switch (flag)
    {
    case NONE:
      std::cout << "neither" << std::endl;
      break;
    case FACTOR:
      std::cout << "factor" << std::endl;
      break;
    case MULTIPLE:
      std::cout << "multiple" << std::endl;
      break;
    }
    std::cin >> a >> b;
  }
  return 0;
}
