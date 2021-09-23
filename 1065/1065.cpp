/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1065.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:49:14 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/23 23:49:25 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

bool	is_hansoo(int num)
{
	vector<int>	digits;
	int			diff;

	if (num / 10 == 0)
		return (true);
	while (num)
	{
		digits.push_back(num % 10);
		num /= 10;
	}
	diff = digits[0] - digits[1];
	for (int i = 1; i + 1 < digits.size(); i++)
	{
		if (digits[i] - digits[i + 1] != diff)
			return (false);
	}
	return (true);
}

int	main(void)
{
	int	num;
	int	count = 0;

	cin >> num;
	for (int i = 1; i <= num; i++)
		if (is_hansoo(i))
			count++;
	cout << count;
	return (0);
}
