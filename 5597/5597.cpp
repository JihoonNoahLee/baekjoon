/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5597.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:01:30 by jihoolee          #+#    #+#             */
/*   Updated: 2023/04/23 11:16:51 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

const int NUM_STUDENTS = 30;
const int NUM_UNSUBMITTED = 2;

int main(void) {
  std::vector<int>  unsubmitted(NUM_STUDENTS, 1);

  for (size_t idx = 0; idx < NUM_STUDENTS - NUM_UNSUBMITTED; ++idx) {
    int submit_student;

    std::cin >> submit_student;
    unsubmitted[submit_student - 1] = 0;
  }
  for (size_t idx = 0; idx < NUM_STUDENTS; ++idx)
    if (unsubmitted[idx] == 1)
      std::cout << idx + 1 << std::endl;
  return 0;
}
