/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2438.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:00:52 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:00:57 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		num;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}
	return (0);
}
