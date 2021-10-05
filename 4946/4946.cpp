/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4946.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:39:51 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/01 22:47:25 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

using namespace std;

bool	is_prime(int num)
{
	int	check_max = sqrt(num);

	if (num == 1)
		return (false);
	for (int i = 2; i <= check_max; i++)
		if (num % i == 0)
			return (false);
	return (true);
}

int	main(void)
{
	int	n;
	int	prime_cnt;

	while (true)
	{
		cin >> n;
		if (n == 0)
			break ;
		prime_cnt = 0;
		for (int i = n + 1; i < 2 * n + 1; i++)
			if (is_prime(i))
				prime_cnt++;
		cout << prime_cnt;
	}
	return (0);
}
