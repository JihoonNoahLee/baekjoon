/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10718.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:46:18 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:46:22 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
  int total = 2;
  for (int i = 0; i < total; i++)
  {
    cout <<"강한친구 대한육군";
    if (i != total - 1)
      cout << "\n";
  }
  return (0);
}
