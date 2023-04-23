/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9086.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:02:47 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/23 13:04:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
  int         word_cnt;
  std::string word;

  std::cin >> word_cnt;
  for (int i = 0; i < word_cnt; ++i) {
    std::cin >> word;
    std::cout << *word.begin() << *(word.end() - 1) << std::endl;
  }
  return 0;
}
