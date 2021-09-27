/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4344.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:37:24 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:37:39 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

float	get_over_avg(vector<int> scores)
{
	int		over_avg = 0;
	float	avg = 0.;

	for (int i = 0; i < scores.size(); i++)
		avg += scores[i];
	avg /= scores.size();
	for (int i =0; i < scores.size(); i++)
		if (scores[i] > avg)
			over_avg++;
	return (float(over_avg) / (float)scores.size() * 100.);
}

int	main(void)
{
	int						classes_num;
	int						students_num;
	int						temp;
	cin >> classes_num;
	vector<vector<int> >	classes_scores(classes_num);

	for (int i = 0; i < classes_num; i++)
	{
		cin >> students_num;
		for (int j = 0; j < students_num; j++)
		{
			cin >> temp;
			classes_scores[i].push_back(temp);
		}
	}
	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < classes_num; i++)
		cout << get_over_avg(classes_scores[i]) << '%' << endl;
	return (0);
}
