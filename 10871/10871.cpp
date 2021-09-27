/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10871.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:50:16 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/27 14:50:20 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int		len;
	int		max;
	int		num;

	cin >> len >> max;
	for (int i = 0; i < len; i++)
	{
		cin >> num;
		if (num < max)
			cout << num << ' ';
	}
	return (0);
}
