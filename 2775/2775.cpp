/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2775.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:22:57 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 16:42:25 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int	sum(vector<int> vec, int len)
{
	int	result = 0;

	for (int i = 0; i < len; i++)
		result += vec[i];
	return (result);
}

int	get_people_num(int floor, int room_num)
{
	vector<vector<int> >	apt(floor + 1, vector<int>(room_num));
	int						total = 0;

	for (int n = 1; n <= room_num; n++)
		apt[0][n - 1] = n;
	for (int f = 1; f < floor + 1; f++)
		for (int n = 1; n <= room_num; n++)
			apt[f][n - 1] = sum(apt[f - 1], n);
	return (apt[floor][room_num - 1]);
}

int	main(void)
{
	int			cases;
	cin >> cases;
	int			floor, room_num;
	vector<int>	result(cases);

	for (int i = 0; i < cases; i++)
	{
		cin >> floor >> room_num;
		result[i] = get_people_num(floor, room_num);
	}
	for (int i = 0; i < cases; i++)
		cout << result[i] << endl;
	return (0);
}
