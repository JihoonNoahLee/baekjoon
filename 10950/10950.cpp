/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10950.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:51:27 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:51:36 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		num_tests;
	int		iter;
	int		a;
	int		b;

	cin >> num_tests;
	iter = 0;
	while (iter < num_tests)
	{
		cin >> a >> b;
		cout << a + b << endl;
		iter++;
	}
}
