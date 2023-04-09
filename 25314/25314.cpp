/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25314.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:26:10 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/09 17:28:05 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  int size;

  std::cin >> size;
  for (int i = 0; i * 4 < size; ++i)
    std::cout <<  "long ";
  std::cout << "int";
  return 0;
}
