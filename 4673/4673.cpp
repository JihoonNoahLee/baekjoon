/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4673.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:38:19 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:38:30 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

bool	is_selfnum(int i)
{
	int	sum;
	int	temp;

	for (int j = 1; j < i; j++)
	{
		sum = j;
		temp = j;
		while (temp)
		{
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == i)
			return (false);
	}
	return (true);
}

int	main(void)
{
	for (int i = 1; i <= 10000; i++)
		if (is_selfnum(i) == true)
			cout << i << endl;
	return (0);
}
