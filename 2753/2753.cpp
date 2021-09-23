/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2753.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:14:02 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:14:19 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int		year;
	bool	is_leap;

	is_leap = 0;
	cin >> year;
	if (year % 4 == 0)
	{
		is_leap = 1;
		if (year % 100 == 0)
		{
			is_leap = 0;
			if (year % 400 == 0)
				is_leap = 1;
		}
	}
	cout << is_leap;
	return (0);
}
