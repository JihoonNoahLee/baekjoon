/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1110.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:50:35 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/28 14:34:23 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		iter = 0;
	int		first;
	int		num;

	cin >> first;
	num = first;
	do
	{
		num = num % 10 * 10 + ((num % 10 + num / 10) % 10);
		iter++;
	} while (num != first);
	cout << iter;
}
