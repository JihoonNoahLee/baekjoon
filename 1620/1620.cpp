/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1620.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:38:03 by jihoolee          #+#    #+#             */
/*   Updated: 2022/05/13 00:08:38 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>

enum define {
  POKEMON_SPECIES = 100000
};

void inspect_pokemon(int test_case_len,
                      std::vector<std::string>& idx_pokedex,
                      std::map<std::string, int>& name_pokedex) {
  std::string pokemon_name;
  int         pokemon_num;

  for (int i = 0; i < test_case_len; ++i) {
    std::cin >> pokemon_name;
    if ((pokemon_num = atoi(pokemon_name.c_str())))
      std::cout << idx_pokedex[pokemon_num - 1];
    else
      std::cout << name_pokedex.at(pokemon_name);
    std::cout << '\n';
  }
}

void fill_pokedex(int pokedex_len,
                  std::vector<std::string>& idx_pokedex,
                  std::map<std::string, int>& name_pokedex) {
  std::string pokemon_name;

  for (int idx = 0; idx < pokedex_len; ++idx) {
    std::cin >> pokemon_name;
    idx_pokedex[idx] = pokemon_name;
    name_pokedex.insert(std::pair<std::string, int>(pokemon_name, idx + 1));
  }
}

int main(void) {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(nullptr);

  int                         pokedex_len, test_case_len;
  std::vector<std::string>    idx_pokedex(POKEMON_SPECIES);
  std::map<std::string, int>  name_pokedex;

  std::cin >> pokedex_len >> test_case_len;
  fill_pokedex(pokedex_len, idx_pokedex, name_pokedex);
  inspect_pokemon(test_case_len, idx_pokedex, name_pokedex);
  return 0;
}
