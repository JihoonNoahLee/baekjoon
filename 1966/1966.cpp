/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1966.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:42:26 by jihoolee          #+#    #+#             */
/*   Updated: 2024/04/21 12:06:11 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <queue>
#include <utility>

int get_document_turn(void) {
  int                               document_cnt;
  int                               target_idx;
  std::queue<std::pair<int, int> >  documents;
  std::priority_queue<int>          priority_queue;
  int                               document_turn = 0;

  std::cin >> document_cnt >> target_idx;
  for (int idx = 0; idx < document_cnt; ++idx) {
    int doc_priority;

    std::cin >> doc_priority;
    documents.push(std::make_pair(idx, doc_priority));
    priority_queue.push(doc_priority);
  }
  while (!documents.empty()) {
    while (documents.front().second != priority_queue.top()) {
      std::pair<int, int> front = documents.front();

      documents.pop();
      documents.push(front);
    }
    ++document_turn;
    if (documents.front().first == target_idx)
      break;
    documents.pop();
    priority_queue.pop();
  }
  return document_turn;
}

int main() {
  int case_cnt;

  std::cin >> case_cnt;
  for (int i = 0; i < case_cnt; ++i) {
    std::cout << get_document_turn() << '\n';
  }
  return 0;
}
