/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10988.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:41:05 by jihoolee          #+#    #+#             */
/*   Updated: 2023/05/07 13:54:46 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(const std::string& word) {
  std::string reversed_word(word);

  std::reverse(reversed_word.begin(), reversed_word.end());
  return (word == reversed_word);
}

int main(void) {
  std::string word;

  std::cin >> word;
  std::cout << is_palindrome(word);
  return 0;
}
