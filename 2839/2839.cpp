/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2839.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:27:16 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/29 15:38:46 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	int	total_m;
	int	bag_5;
	int	bag_3 = 0;

	cin >> total_m;
	bag_5 = total_m / 5;
	while (total_m != 5 * bag_5 + 3 * bag_3 && bag_5 >= 0)
	{
		if (total_m > 5 * bag_5 + 3 * bag_3)
			bag_3++;
		else if (total_m < 5 * bag_5 + 3 * bag_3)
		{
			bag_5--;
			bag_3 = 0;
		}
	}
	if (bag_5 >= 0)
		cout << bag_5 + bag_3;
	else
		cout << -1;
	return (0);
}
