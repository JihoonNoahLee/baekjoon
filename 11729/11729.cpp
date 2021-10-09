/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11729.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:14:40 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/09 20:57:07 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> >	oper;

void	print_result()
{
	int	oper_num = oper.size();

	cout << oper_num << endl;
	for (int i = 0; i < oper_num; i++)
		cout << oper[i][0] << ' ' << oper[i][1] << endl;
}

void	hanoi(int height, int from, int to)
{
	vector<int>	oper_temp(2);
	int			waypoint = 6 - from - to;

	if (height == 1)
	{
		oper_temp[0] = from;
		oper_temp[1] = to;
		oper.push_back(oper_temp);
		return ;
	}
	hanoi(height - 1, from, waypoint);
	hanoi(1, from, to);
	hanoi(height - 1, waypoint, to);
}

int	main(void)
{
	int	height;

	cin >> height;
	hanoi(height, 1, 3);
	print_result();
	return (0);
}
