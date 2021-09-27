/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10952.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:53:33 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:53:34 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int a;
	int b;

	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		cout << a + b << '\n';
	}
	return (0);
}
