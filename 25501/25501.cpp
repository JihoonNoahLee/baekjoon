/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25501.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:19:13 by jihoolee          #+#    #+#             */
/*   Updated: 2022/09/10 11:39:24 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int g_recursion_cnt = 0;

int recursions(const std::string& str, int l, int r) {
  ++g_recursion_cnt;
  if (l >= r)
    return 1;
  else if (str[l] != str[r])
    return 0;
  else
    return recursions(str, l + 1, r - 1);
}

int is_palindrome(const std::string& str) {
  return recursions(str, 0, str.length() - 1);
}

int main(void) {
  int         cases;
  std::string str;

  std::cin >> cases;
  for (int i = 0; i < cases; ++i) {
    std::cin >> str;
    g_recursion_cnt = 0;
    std::cout << is_palindrome(str) << ' ' << g_recursion_cnt << '\n';
  }
  return 0;
}
