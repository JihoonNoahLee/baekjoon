/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1978.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 23:13:00 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/29 23:16:59 by jihoolee         ###   ########.fr       */
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
	int	cases;
	cin >> cases;
	int	num;
	int	num_prime = 0;

	for (int i = 0; i < cases; i++)
	{
		cin >> num;
		if (is_prime(num))
			num_prime++;
	}
	cout << num_prime;
	return (0);
}
