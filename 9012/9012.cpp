/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9012.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:41:24 by jihoolee          #+#    #+#             */
/*   Updated: 2024/02/25 17:09:59 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>

bool is_VPS(const std::string& PS) {
  std::stack<char>  s;

  for (size_t idx = 0; idx < PS.length(); ++idx) {
    if (PS[idx] == '(') {
      s.push('(');
    } else {
      if (s.empty())
        return false;
      s.pop();
    }
  }
  if (!s.empty())
    return false;
  return true;
}

int main(void) {
  int         case_cnt;
  std::string PS;
  std::string result;

  std::cin >> case_cnt;
  for (int i = 0; i < case_cnt; ++i) {
    std::cin >> PS;
    result = is_VPS(PS) ? "YES": "NO";
    std::cout << result << std::endl;
  }
  return 0;
}
