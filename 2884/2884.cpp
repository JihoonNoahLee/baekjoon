/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2884.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:31:40 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:31:51 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		hour;
	int		minute;

	cin >> hour >> minute;
	if (minute < 45)
	{
		minute = minute + 60 - 45;
		if (hour == 0)
			hour = 23;
		else
			hour -= 1;
	}
	else
		minute -= 45;
	cout << hour << " " << minute;
}
