/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1929.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 00:08:42 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/30 01:03:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<bool>	eratos(int start, int end)
{
	vector<bool>	result(end + 1, 1);

	result[0] = false;
	result[1] = false;
	for (int i = 2; i * i <= end; i++)
	{
		if (result[i] == true)
			for (int j = 2; j * i <= end; j++)
				result[i * j] = false;
	}
	return (result);
}

int	main(void)
{
	int				start, end;
	vector<bool>	primes;

	cin >> start >> end;
	primes = eratos(start, end);
	for (int i = start; i <= end; i++)
		if (primes[i] == true)
			cout << i << '\n';
	return (0);
}
