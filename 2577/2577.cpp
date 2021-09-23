/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2577.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:06:53 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:07:05 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int	main(void)
{
	int			a, b, c;
	int			result;
	vector<int>	dec(10);

	cin >> a >> b >> c;
	result = a * b * c;
	while (result)
	{
		dec[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i ++)
		cout << dec[i] << endl;
	return (0);
}
