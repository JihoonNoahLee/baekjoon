/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11021.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:55:07 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:55:08 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		num;
	int		a;
	int		b;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a + b << '\n';
	}
	return (0);
}
