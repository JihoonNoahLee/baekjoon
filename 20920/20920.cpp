/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20920.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:19:41 by jihoolee          #+#    #+#             */
/*   Updated: 2024/04/21 14:09:59 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <utility>
#include <set>
#include <unordered_map>

typedef typename std::pair<std::string, int>  CountedWord;

template <typename T = CountedWord>
struct CompareWord{
  bool operator()(const T& word1, const T& word2) const {
    if (word1.second != word2.second)
      return word1.second > word2.second;
    else if (word1.first.length() != word2.first.length())
      return word1.first.length() > word2.first.length();
    else
      return word1 < word2;
  }
};  // MARK: struct CompareWord

void get_input(std::unordered_map<std::string, int>* p_inputs) {
  int word_cnt;
  int min_word_len;

  std::cin >> word_cnt >> min_word_len;
  for (int i = 0; i < word_cnt; ++i) {
    std::string word;

    std::cin >> word;
    if (word.length() < min_word_len)
      continue;
    if (p_inputs->count(word) == 0)
      p_inputs->insert(std::make_pair(word, 0));
    else
      p_inputs->at(word) += 1;
  }
}

int main(void) {
  std::cin.tie(nullptr);
  std::cin.sync_with_stdio(false);

  std::unordered_map<std::string, int>              counted_words;
  std::set<CountedWord, CompareWord<CountedWord> >  dictionary;

  get_input(&counted_words);
  for (
    std::unordered_map<std::string, int>::iterator it = counted_words.begin();
    it != counted_words.end();
    ++it
  )
    dictionary.insert(std::make_pair(it->first, it->second));
  for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {
    std::cout << it->first << '\n';
  }
  return 0;
}
