/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18108.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 22:34:19 by jihoolee          #+#    #+#             */
/*   Updated: 2022/03/01 22:36:01 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

const int year_diff = 543;

int main(void) {
  int be_year;

  std::cin >> be_year;
  std::cout << be_year - year_diff << std::endl;
  return 0;
}
