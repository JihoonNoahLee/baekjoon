/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3052.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:36:38 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:36:40 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

bool	is_in(vector<int> vec, int num)
{
	for (int i = 0; i < vec.size(); i++)
		if (vec[i] == num)
			return (true);
	return (false);
}

int	main(void)
{
	vector<int>	dec(10);
	vector<int>	mods;
	int			mod;

	for (int i = 0; i < 10; i++)
		cin >> dec[i];
	for (int i = 0; i < 10; i++)
	{
		mod = dec[i] % 42;
		if (is_in(mods, mod) == false)
			mods.push_back(mod);
	}
	cout << int(mods.size());
	return (0);
}
