/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11718.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:09:31 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/23 13:54:14 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
  std::string line;

  while (std::getline(std::cin, line))
    std::cout << line << std::endl;
  return 0;
}
