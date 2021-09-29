/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2581.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 23:38:20 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/29 23:44:37 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

bool	is_prime(int num)
{
	if (num == 1)
		return (false);
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return (false);
	return (true);
}

int	main(void)
{
	int	start, end;
	int	sum = 0;
	int	min = -1;

	cin >> start >> end;
	for (int i = start; i <= end; i++)
	{
		if (is_prime(i))
		{
			sum += i;
			if (min == -1)
				min = i;
		}
	}
	if (sum > 0)
		cout << sum << endl;
	cout << min << endl;
	return (0);
}
