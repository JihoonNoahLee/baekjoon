/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2231.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:24:21 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/11 15:30:16 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<int>	split_digit(int n)
{
	vector<int>	digits;

	while (n)
	{
		digits.push_back(n % 10);
		n /= 10;
	}
	return (digits);
}

int	get_constructor(int num)
{
	vector<int>	digits;
	int			sum;

	for (int i = 1; i < num; i++)
	{
		digits = split_digit(i);
		sum = i;
		for (int j = 0; j < digits.size(); j++)
			sum += digits[j];
		if (sum == num)
			return (i);
	}
	return (0);
}

int	main(void)
{
	int	num;

	cin >> num;
	cout << get_constructor(num);
	return (0);
}
