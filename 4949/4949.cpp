/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4949.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:40:24 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/01 15:06:48 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>

bool is_brace_matched(const std::string& sentence) {
  std::stack<char>  s;

  for (size_t idx = 0; idx < sentence.length(); ++idx) {
    if (sentence[idx] == '[' || sentence[idx] == '(') {
      s.push(sentence[idx]);
    } else if (sentence[idx] == ']') {
      if (s.empty())
        return false;
      else if (s.top() != '[')
        return false;
      s.pop();
    } else if (sentence[idx] == ')') {
      if (s.empty())
        return false;
      else if (s.top() != '(')
        return false;
      s.pop();
    }
  }
  if (!s.empty())
    return false;
  return true;
}

int main(void) {
  std::string input;
  std::string result;

  while (true) {
    std::getline(std::cin, input);
    if (input == ".")
      break;
    result = is_brace_matched(input) ? "yes" : "no";
    std::cout << result << std::endl;
  }
  return 0;
}
