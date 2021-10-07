/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9020.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:16:13 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/07 19:36:48 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<bool>	is_prime(10000 + 1, true);

void	eratos()
{
	int	max = is_prime.size() - 1;

	is_prime[0] = false;
	is_prime[1] = false;
	for (int i = 2; i * i <= max; i++)
		if (is_prime[i] == true)
			for (int j = i * 2; j <= max; j += i)
				is_prime[j] = false;
}

int	get_goldbach(int num)
{
	int	smaller = num / 2;

	while (is_prime[smaller] == false || is_prime[num - smaller] == false)
		smaller--;
	return (smaller);
}

int	main(void)
{
	int	cases;
	int	num;
	int	smaller_gb;

	cin >> cases;
	eratos();
	for (int i = 0; i < cases; i++)
	{
		cin >> num;
		smaller_gb = get_goldbach(num);
		cout << smaller_gb << ' ' << num - smaller_gb << '\n';
	}
	return (0);
}
