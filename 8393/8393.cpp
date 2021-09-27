/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8393.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:39:47 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:40:05 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		num;
	int		iter;
	int		sum;

	cin >> num;
	iter = 1;
	sum = 0;
	while (iter <= num)
	{
		sum += iter;
		iter++;
	}
	cout << sum;
	return (0);
}
