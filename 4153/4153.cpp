/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4153.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 01:38:49 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/30 01:49:55 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int	main(void)
{
	vector<int>	sides(3);

	while (1)
	{
		cin >> sides[0] >> sides[1] >> sides[2];
		if (sides[0] == 0 && sides[1] == 0 && sides[2] == 0)
			break ;
		sort(sides.begin(), sides.end());
		if (sides[2] * sides[2] == sides[1] * sides[1] + sides[0] * sides[0])
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	return (0);
}
