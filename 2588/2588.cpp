/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2588.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 00:07:40 by jihoolee          #+#    #+#             */
/*   Updated: 2021/09/24 00:07:56 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int	a;
	int b;

	cin >> a >> b;
	cout << a * (b % 10) << endl;
	cout << a * (b % 100 / 10) << endl;
	cout << a * (b / 100) << endl;
	cout << a * b;
	return (0);
}
