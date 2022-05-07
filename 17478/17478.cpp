/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   17478.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:13:35 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/07 18:05:21 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

std::string question = "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.";
std::vector<std::string> his_words(4);
std::vector<std::string> his_answer(2);
std::string conclusion = "라고 답변하였지.";

void print_with_indent(int depth, std::string line) {
  for (int i = 0; i < depth; ++i)
    std::cout << "____";
  std::cout << line << '\n';
}

void answer_recur(int depth, int n) {
  if (depth == 0)
    std::cout << question << '\n';
  if (depth == n) {
    for (size_t idx = 0; idx < his_answer.size(); ++idx)
      print_with_indent(depth, his_answer[idx]);
    print_with_indent(depth, conclusion);
    return;
  }
  for (size_t idx = 0; idx < his_words.size(); ++idx)
    print_with_indent(depth, his_words[idx]);
  answer_recur(depth + 1, n);
  print_with_indent(depth, conclusion);
}

void init_strs(void) {
  his_words[0] = "\"재귀함수가 뭔가요?\"";
  his_words[1] = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
  his_words[2] = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
  his_words[3] = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";
  his_answer[0] = "\"재귀함수가 뭔가요?\"";
  his_answer[1] = "\"재귀함수는 자기 자신을 호출하는 함수라네\"";
}

int main(void) {
  int n;

  std::cin >> n;
  init_strs();
  answer_recur(0, n);
  return 0;
}
