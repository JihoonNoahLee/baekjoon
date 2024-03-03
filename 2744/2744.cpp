/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2744.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:38:00 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/03 13:47:12 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

std::string swap_case(const std::string& word) {
  std::string swapped_word;

  for (size_t idx = 0; idx < word.size(); ++idx) {
    if (islower(word[idx]))
      swapped_word += toupper(word[idx]);
    else if (isupper(word[idx]))
      swapped_word += tolower(word[idx]);
    else
      swapped_word += word[idx];
  }
  return swapped_word;
}

int main(void) {
  std::string word;

  std::cin >> word;
  std::cout << swap_case(word);
  return 0;
}
