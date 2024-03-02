/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2420.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:09:19 by jihoolee          #+#    #+#             */
/*   Updated: 2024/03/02 17:12:13 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  int64_t  n;
  int64_t  m;

  std::cin >> n >> m;
  if (n > m)
    std::cout << n - m;
  else
    std::cout << m - n;
  return 0;
}
