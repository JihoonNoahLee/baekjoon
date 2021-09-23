/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1157.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:53:06 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:53:23 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char	get_max_char(vector<int> alpha)
{
	bool	overlap = false;
	int		max_idx = 0;
	int		max = 0;

	for (int i = 0; i < alpha.size(); i++)
	{
		if (alpha[i] > max)
		{
			max_idx = i;
			max = alpha[i];
			overlap = false;
		}
		else if (alpha[i] == max && max > 0)
			overlap = true;
	}
	if (overlap)
		return ('?');
	return ('A' + max_idx);
}

int	main(void)
{
	string		word;
	vector<int>	alpha(26);
	int			max = 0;


	cin >> word;
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			alpha[word[i] - 'a']++;
		else if (word[i] >= 'A' && word[i] <= 'Z')
			alpha[word[i] - 'A']++;
		else
			return (-1);
	}
	cout << get_max_char(alpha);
	return (0);
}
