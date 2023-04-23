/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   27866.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:38:51 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/23 11:39:42 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
  std::string word;
  int         idx;

  std::cin >> word >> idx;
  std::cout << word[idx - 1];
  return 0;
}
