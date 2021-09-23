/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1546.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:57:25 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:58:17 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

float	get_avg(vector<float> vec)
{
	float	sum = 0;

	for (int i = 0; i < vec.size(); i++)
		sum += vec[i];
	return (sum / float(vec.size()));
}

vector<float>	get_new_scores(vector<int> scores)
{
	vector<float>	new_scores(scores.size());
	float			max = 0;

	for (int i = 0; i < scores.size(); i++)
		if (max < scores[i])
			max = scores[i];
	for (int i = 0; i < new_scores.size(); i++)
		new_scores[i] = float(scores[i]) / max * 100.f;
	return (new_scores);
}

int	main(void)
{
	int			len;
	cin >> len;
	float		new_avg;
	vector<int>	scores(len);
	vector<float>	new_scores(len);

	for (int i = 0; i < len; i++)
		cin >> scores[i];
	new_scores = get_new_scores(scores);
	new_avg = get_avg(new_scores);
	cout << new_avg;
	return (0);
}
