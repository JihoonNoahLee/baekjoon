/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2439.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:01:45 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:01:58 by jihoolee         ###   ########.fr       */
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
		for (int j = 0; j < num - i - 1; j++)
			cout << ' ';
		for (int j = 0; j < i + 1; j++)
			cout << '*';
		cout << '\n';
	}
	return (0);
}
