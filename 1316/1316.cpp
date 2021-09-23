/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1316.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:55:09 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:55:14 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool	is_groupword(string word)
{
	vector<int>	alpha(26);
	int			iter = 0;

	while (iter < word.size())
	{
		if (alpha[word[iter] - 'a'] == 1)
			return (false);
		else
		{
			alpha[word[iter] - 'a'] = 1;
			while (word[iter] == word[iter + 1])
				iter++;
		}
		iter++;
	}
	return (true);
}

int	main(void)
{
	int				word_count;
	cin >> word_count;
	vector<string>	words(word_count);
	int				group_words = 0;

	for (int i = 0; i < word_count; i++)
		cin >> words[i];
	for (int i = 0; i < word_count; i++)
	{
		if (is_groupword(words[i]))
			group_words++;
	}
	cout << group_words;
	return (0);
}
