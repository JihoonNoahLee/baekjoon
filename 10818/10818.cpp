/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10818.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:48:37 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:48:46 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int	main(void)
{
	int			len;
	int			min, max;

	cin >> len;
	vector<int>	vec(len);

	for (int i = 0; i < len; i++)
		cin >> vec[i];
	min = vec[0];
	max = vec[0];
	for (int i = 0; i < len; i++)
	{
		if (vec[i] > max)
			max = vec[i];
		else if (vec[i] < min)
			min = vec[i];
	}
	cout << min << ' ' << max;
	return (0);
}
