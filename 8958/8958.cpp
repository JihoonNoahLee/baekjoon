/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8958.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:40:49 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:40:59 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int	get_scores(string str)
{
	int	total_score = 0;
	int	score = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'O')
			score++;
		else if (str[i] == 'X')
			score = 0;
		total_score += score;
	}
	return (total_score);
}

int	main(void)
{
	int						len;
	cin >> len;
	vector<string>	scoreboards(len);
	vector<int>		scores(len);

	for (int i = 0; i < len; i++)
		cin >> scoreboards[i];
	for (int i = 0; i < len; i++)
		cout << get_scores(scoreboards[i]) << endl;
	return (0);
}
