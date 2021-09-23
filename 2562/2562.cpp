/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2562.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:05:32 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:05:40 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int	main(void)
{
	vector<int>	vec(9);
	int			max;
	int			idx = 1;

	for (int i = 0; i < 9; i++)
		cin >> vec[i];
	max = vec[0];
	for (int i = 1; i < 9; i++)
		if (vec[i] > max)
		{
			max = vec[i];
			idx = i + 1;
		}
	cout << max << '\n' << idx;
	return (0);
}
