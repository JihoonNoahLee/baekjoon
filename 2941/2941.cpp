/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2941.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:35:41 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:35:53 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int	cro_alpha(string word, int idx)
{
	int	wordlen = word.size();

	if (idx == wordlen)
		return (1);
	else if (idx + 1 <= wordlen &&
		((word[idx] == 'c' && (word[idx + 1] == '=' || word[idx + 1] == '-'))
		|| (word[idx] == 'd' && word[idx + 1] == '-')
		|| (word[idx + 1] == 'j' && (word[idx] == 'l' || word[idx] == 'n'))
		|| (word[idx + 1] == '=' && (word[idx] == 's' || word[idx] == 'z'))))
		return (2);
	else if (idx + 2 <= wordlen &&
		(word[idx] == 'd' && word[idx + 1] == 'z' && word[idx + 2] == '='))
		return (3);
	else
		return (1);
}

int	main(void)
{
	string	word;
	int		idx = 0;
	int		len = 0;

	cin >> word;
	while(idx < word.size())
	{
		len++;
		idx += cro_alpha(word, idx);
	}
	cout << len;
	return (0);
}
